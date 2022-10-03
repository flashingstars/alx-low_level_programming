#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabet
 *
 * @c: the character to check
 *
 * Return: 1 if c is a lowercase or uppercase letter, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
