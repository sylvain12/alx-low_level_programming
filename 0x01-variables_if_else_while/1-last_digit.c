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
	char msg[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("%s is %d and is greater than 5\n", msg, n);
	else if (n == 0)
		printf("%s is %d and is 0\n", msg, n);
	else if (n < 6 && n != 0)
		printf("%s is %d and is less than 6 and not 0\n", msg, n);
	return (0);
}
