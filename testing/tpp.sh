#!/bin/bash

# rm olde exec
rm testing/test_gpp.out;

# compile new
#g++ testing/test.cpp \
/usr/local/Cellar/gcc/11.2.0_3/bin/g++-11 testing/test.cpp \
	-lm \
	-o testing/test_gpp.out;


# run new
./testing/test_gpp.out;