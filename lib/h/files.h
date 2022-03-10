#ifndef FILES_H_
#define FILES_H_

#include <stdio.h>

// debugging fns


// fns
int utf8_byte_count(unsigned char c);
int num_chars(FILE *f_in);
void rdf(char fp[]);

#endif // FILES_H_