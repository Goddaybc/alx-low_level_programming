#include "function_pointers.h"
/**
 * int_index - function
 * Description: Search for an integer
 * @array: pointer parameter of type int
 * @size: parameters of size int, numbers of elements in array
 * @cmp: pointer function, that return int andtake in int
 * Return: return -1 for no element match and when size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (!array || !cmp)
return (-1);
if (size <= 0)
return (-1);
while (size-- > 0)
{
i++;
if (cmp(*array) != 0)
{
return (i - 1);
}
array++;
}
return (-1);
}
