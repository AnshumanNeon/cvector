compiler = gcc-mp-14
libtool = libtool
static = -static

compiler_flags = -Wall -Werror -Wpedantic -Wextra
include_dirs = -Iinclude

test_compiler_flags = -Wall -Werror -Wpedantic

src_dir = src
src_files = $(wildcard $(src_dir)/*.c)
objs = $(src_files:%.c=%.o)
obj_files = $(objs:src/%=build/%)

build_dir = build
target = libcvector.a

$(build_dir)/$(target): $(obj_files)
	$(libtool) $(static) -o $@ $^

$(obj_files): build/%.o: src/%.c
	mkdir -p build/
	$(compiler) $(compiler_flags) $(include_dirs) -c $^ -o $@

test: $(build_dir)/$(target) test/test.c
	$(compiler) $(test_compiler_flags) -Lbuild -lcvector $(include_dirs) test/test.c -o $(build_dir)/test

run: test
	$(build_dir)/test

.PHONY: $(obj_files) $(build_dir)/$(target) clean test

clean:
	rm -rf build/
