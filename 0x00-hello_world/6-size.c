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

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of int: %ld byte(s)\n", sizeof(i));
	printf("Size of long int: %ld byte(s)\n", sizeof(li));
	printf("Size of long long int: %lli byte(s)\n",  sizeof(ll));
	printf("Size of float: %ld byte(s)\n", sizeof(f));

	return (0);
}
