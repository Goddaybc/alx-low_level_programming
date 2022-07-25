#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a 2-dimensional array created by alloc_grid
 * @grid: a pointer to the first column of thearray
 * @height: the numbers of rows in the arrays
 * Return: void
 */
void free_grid(int **grid, int height)
{
while (height)
free(grid[--height]);
free(grid);
}
