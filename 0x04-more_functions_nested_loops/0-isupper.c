#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 *
 * Description: '_isupper is a good function'
 * @c: input for alphabet
 *
 * Return: 1 of uppercase, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
