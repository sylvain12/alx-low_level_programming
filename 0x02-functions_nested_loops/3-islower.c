#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - Check for lwercase charater
* @c: Test character
*
* Return: 1 or 0
*/
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	return (0);
}
