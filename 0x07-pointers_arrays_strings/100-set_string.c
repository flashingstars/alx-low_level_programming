#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 *
 * @s: pointer pointing to pointer we need to set
 * @to: pointer pointing to char variable
 */

void set_string(char **s, char *to)
{
	*s = to;
}
