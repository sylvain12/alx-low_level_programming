#include <stdio.h>

/**
* main - Prints size of various types on the computer 
* Return: 0
*/
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long ll;

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(li));
	printf("Size of long long: %lu byte(s)\n",  sizeof(ll));
    printf("Size of float: %lu byte(s)\n", sizeof(f));

	return (0);
}
