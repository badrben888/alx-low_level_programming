#include "main.h"

/**
 * _islower - 3ik 3iiiiik a 3ibadlah
 * @c: Description of parameter x
 *
 * Description: 3ik 3iiiiik a 3ibad lah
 * section header: Section description)*
 * Return: Description of the returned value
 */
int _islower(int c)
{
	if (c >= 65 && c <=  90)
		return (0);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
