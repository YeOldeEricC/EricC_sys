/*
---------------------------------

HEADER FILE STRUCTURE --

#ifndef TEST_H_
#define TEST_H_

// debugging fns

// fns
void fn();

#endif // TEST_H_

---------------------------------

C FILE STRUCTURE --

#include "../h/test.h"
#include <stdio.h>

// debugging fns

// fns
void fn() {...}

---------------------------------
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <complex.h>
#include <time.h>

// import of custom libs
#include "../lib/h/shell.h"
#include "../lib/h/config.h"
#include "../lib/h/files.h"

int main() {
	return 0;
}