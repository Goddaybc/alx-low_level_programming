#include "main.h"
/**
 * print_diagonal - a funcrion that draw a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: A diagonal 
 */
void print_diagonal(int n)
{
int co, sp;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= n; co++)
{
for (sp = 1; sp < co; sp++)
{
_putchar('_');
}
_putchar('\\');
_putchar('\n');
}
}
}





