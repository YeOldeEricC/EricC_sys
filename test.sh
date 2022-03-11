echo "-- REMOVING OLD EXEC --";
rm testing.out;

echo "-- COMPILING CODE --";
#gcc kernel.c \
/usr/local/Cellar/gcc/11.2.0_3/bin/gcc-11 kernel.c \
	-lm \
	lib/c/files.c \
	lib/c/config.c \
	-o testing.out;

echo "-- RUNNING NEW EXEC --";
./testing.out;
echo "-- DONE --";