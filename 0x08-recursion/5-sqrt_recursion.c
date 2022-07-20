#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: The number to find the sqrt root of
 * @root: The root to be tested
 * Return: if the number has a natural sqrt root - the square root
 * if n does not not have a natural number - -1
 */
int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);
if (root == num / 2)
return (-1);
return (find_sqrt(num, root + 1));
}
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
