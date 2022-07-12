#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main -> assign random variable n each time it is executed
 * and print out the last digit of the number stored in variable n
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("%i and is greater than 5", &n);
	}
	if (n == 0)
	{
		printf("%i and is 0", &n);
	}
	if (n < 6 && n != 0)
	{
		printf("%i and is less than 6 and not 0", &n);
	}
	printf("\n");
	return (0);
}
