#include <stdlib.h>
#include <stdio.h>
/**
 * main -  pprints all possible different combinations of 
 * two digits.
 * Return: Always (Success)
 */

 int main(void)
{
    int i, j;

    for (i = 48; i <= 57; i++)
    {
        for (j = i + 1; j <= 57; j++)
        {
            putchar(i);
            putchar(j);
            if (i != 56 || j != 57)
                putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
}
