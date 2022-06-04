#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints random number
* Return: 0
*/
int main(void)
{
	int n;
	int m;
	char msg[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("%s %d is %d and is greater than 5\n", msg, n, m);
	else if (m == 0)
		printf("%s %d is %d and is 0\n", msg, n, m);
	else if (m < 6 && m != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", msg, n, m);
	return (0);
}
