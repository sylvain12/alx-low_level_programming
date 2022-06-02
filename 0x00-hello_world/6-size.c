#include <stdio.h>

/**
* main - Prints size of various types on the computer
*
* Return: 0
*/
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int ll;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n",  sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
