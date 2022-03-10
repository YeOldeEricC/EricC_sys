// THIS FILE IS FOR THE MAIN KERNEL OF THE SYSTEM

// standard imports
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <complex.h>

// imports from internal libs
#include "./lib/h/files.h"

bool STOP = false;

int main() {
	while (true) {
		rdf("tmp/testing.txt");

		if (STOP == true) {break;}
		STOP = true;
	}
	printf("\n");
	return 0;
}