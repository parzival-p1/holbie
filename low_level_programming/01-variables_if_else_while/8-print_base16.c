#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase, 
 * followed by a new line.
 *
 * Return: Always (Success)
 */

 int main(void)
{
    int i, j;

    for (i = 48; i <= 57; ++i)
        putchar(i);
    for (j = 97; j <= 102; ++j)
        putchar(j);
    putchar('\n');
    return (0);
}
