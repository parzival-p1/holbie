#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: Always (Success)
 */

 int main(void)
{
    int i, j;

    for (i = 48; i <= 57; i++)
    {
        for (j = 48; j <= 57; j++)
        {
            putchar(i);
            putchar(j);
            if (i != 57 || j != 57)
                putchar(',');        
            putchar(' ');
        }
    }
    putchar('\n');
}
