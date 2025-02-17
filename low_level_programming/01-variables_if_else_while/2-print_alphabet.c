#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always (Success)
 */

 int main(void)
{
    for (int i = 97; i <= 122; i++)
        putchar(i);
    putchar('\n');
    return (0);
}
