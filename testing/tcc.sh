rm testing/test_gcc.out;

gcc testing/test.c\
	-lm \
	lib/ext/maybe_sdl/src/SDL.c
	 -o testing/test_gcc.out;

./testing/test_gcc.out;