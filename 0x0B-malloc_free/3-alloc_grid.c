#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - two dimensional array of punters.
 * @width: integer
 * @height: integer
 * Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{

grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}

