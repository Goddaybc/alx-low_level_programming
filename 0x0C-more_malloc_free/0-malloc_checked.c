#include "main.h"
/**
 * malloc_checked - function to check
 * @b: atring we need to duplicate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p = NULL;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
