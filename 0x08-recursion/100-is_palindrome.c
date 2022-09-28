#include "main.h"

int check_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if it is a palindrome
 * 0 if it is not a palindrome
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - checks the length of the string recursively
 *
 * @s: string to be checked length
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks whether string is palindrome using recursion
 *
 * @s: string to be checked
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, else 0
 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_palindrome(s, i + 1, len - 1));
}
