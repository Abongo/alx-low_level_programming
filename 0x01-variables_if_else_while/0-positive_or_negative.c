#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: - starting point
 * Description: checking if the number is +ve or  -Ve
 * Return r eturn zero if no
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is Positive\n", n);
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
