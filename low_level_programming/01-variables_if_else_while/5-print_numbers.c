#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting 
 * from 0, followed by a new line.
 *
 * Return: Always (Success)
 */

 int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%i", i);
    printf("\n");
    return (0);
}
