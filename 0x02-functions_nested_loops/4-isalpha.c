#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - Check for alphabetic charater
* @c: Test character
*
* Return: 1 or 0
*/
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	return (0);
}
