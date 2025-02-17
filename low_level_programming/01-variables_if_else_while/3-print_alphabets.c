#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */

 int main(void)
{
    int i, j;

    for (i = 97; i <= 122; i++)
        putchar(i);
    for (j = 65; j <= 90; j++)
        putchar(j);
    putchar('\n');

    return (0);
}
