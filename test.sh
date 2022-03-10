rm testing.out;

#gcc kernel.c \
/usr/local/Cellar/gcc/11.2.0_3/bin/gcc-11 kernel.c \
	-lm \
	lib/c/files.c \
	-o testing.out;

./testing.out;