compiler = gcc-mp-14

compiler_flags = -Wall -Werror -Wpedantic
include_dirs = -Iinclude

test_compiler_flags = -Wall -Werror -Wpedantic

src_dir = src
src_files = $(wildcard $(src_dir)/*.c)

build_dir = build
target = cvector.o

$(build_dir)/$(target): $(src_files)
	mkdir -p build/
	$(compiler) $(compiler_flags) $(include_dirs) -c $^ -o $@
	ar rcs $(build_dir)/libcvector.a $@

test:
	$(compiler) $(test_compiler_flags) -Lbuild -lcvector $(include_dirs) test/test.c -o $(build_dir)/test

.PHONY: $(build_dir)/$(target) clean test

clean:
	rm -rf build/
