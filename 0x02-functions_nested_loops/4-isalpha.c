#include "main.h"

/**
 * _isalpha - oki okskiz
 * @c: Description of parameter x
 *
 * Description: Ayyy 
 * section header: Section description)*
 * Return: Description of the returned value
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <=  90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
