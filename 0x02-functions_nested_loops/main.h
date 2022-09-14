#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98_(int n);
void print_times_table(int n);

#endif/*MAIN_H*/
