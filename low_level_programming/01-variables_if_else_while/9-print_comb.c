#include <stdlib.h>
#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: Always (Success)
 */

 int main(void)
{
    int i;

    for(i = 48; i <= 57; i++)
    {
        putchar(i);
        if (i != 57)
            putchar(',');        
        putchar(' ');
    }
    putchar('\n');
}
