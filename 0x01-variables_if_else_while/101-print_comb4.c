#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, j, k;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
if ((i < j) & (j < k) & (k <= '9'))
{
putchar(i);
putchar(j);
putchar(k);
if ((i + j + k) < 168)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
