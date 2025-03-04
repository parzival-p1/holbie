#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */

 int main(void)
{
	int n, lastd;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

    if (lastd > 5)
        printf("Last digit of %i and is %i greater than 5\n", n, lastd);
    else if (lastd < 6 && lastd != 0)
        printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastd);
    else
        printf("Last digit of %i and is %i 0\n", n, lastd);

    return (0);
}
