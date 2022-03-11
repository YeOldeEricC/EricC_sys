// This file holds all the functions related to all filesystem
// manipulation and file reading, writing, editing, creation
// and deletion. -EricC

#include "../h/files.h"
#include <stdio.h>
#include <stdlib.h>

// debugging fns


// fns

// get num of bytes used by the utf8 character
int utf8_byte_count(unsigned char c)
{
	if (c < 128) {
		return 1;
	} else if (c < 224) {
		return 2;
	} else if (c < 240) {
		return 3;
	} else {
		return 4;
	}
}

// get num of chars in file
int num_chars(FILE *f_in)
{
	int character;
	int byte_count;
	int char_count = 0;
	while ((character = fgetc(f_in)) != EOF) {
		char_count += 1;
		byte_count = utf8_byte_count(character);
		for (int i = 0; i < byte_count-1; i++) {
			char_count += 1;
			character = fgetc(f_in);
		}
	}
	return char_count;
}

// read file and print contents
void rdf(char fp[])
{
	FILE *f;
	int character;
	int byte_count;
	f = fopen(fp, "r");
	printf("\n");
	printf("%d\n",sizeof(f));
	while ((character = fgetc(f)) != EOF) {
		byte_count = utf8_byte_count(character);
		for (int i = 0; i < byte_count-1; i++) {
			putchar(character);
			printf("%c", character);
			character = fgetc(f);
		}
		putchar(character);
	}
	printf("\n");
	fclose(f);
}
