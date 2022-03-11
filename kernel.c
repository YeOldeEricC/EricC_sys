// THIS FILE IS FOR THE MAIN KERNEL OF THE SYSTEM

// standard imports
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

// imports from internal libs
#include "./lib/h/files.h"
#include "./lib/h/config.h"

bool STOP = false;

int main() {
	// should load config before the main loop, then inside the loop
	// it can keep config vars in memory and upon quit, edit the configs

	while (true) {
		STOP = true;
		rdf("tmp/testing.txt");


		if (STOP == true) {break;}
	}
	printf("\n");
	return 0;
}