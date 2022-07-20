#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number o return the square root of
 * Return: if n has a natural square root - the natural square root of n
 * if n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
