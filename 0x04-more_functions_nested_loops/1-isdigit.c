#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - Check for upper character
* @c: character
* Return: 1 or 0
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
