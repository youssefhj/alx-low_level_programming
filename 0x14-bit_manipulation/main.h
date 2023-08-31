#ifndef _BIT_MANIPULATION_
#define _BIT_MANIPULATION_

#include <stdio.h>

int _power(int b, int e);
unsigned int _strlen(const char *str);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif