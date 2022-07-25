#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - create a 2-dimensional array with each element set to 0
 * @width: Desired numbers of column
 * @height: Desired numbers of rows
 * Return: NULL if memory allocation fails or any argument is less than 1
 * otherwise return a pointer to the first element of the array
 */
int **alloc_grid(int width, int height)
{
int **matrix, row, column;
if (width < 1 || height < 1)
return (NULL);
matrix[row] = (int *) malloc(sizeof(int) * width);
if (!matrix)
return (NULL);
for (row = 0; row < height; ++row)
{
matrix[row] = (int *) malloc(sizeof(int) * width);
if (!matrix[row])
{
while (--row > -1)
free(matrix[row]);
free(matrix);
return (NULL);
}
for (column = 0; column < width; ++column)
matrix[row][column] = 0;
}
return (matrix);
}
