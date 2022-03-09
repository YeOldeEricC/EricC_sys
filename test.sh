rm testing.out;

g++ kernel.cpp \
	-lm \
	-o testing.out;

./testing.out;