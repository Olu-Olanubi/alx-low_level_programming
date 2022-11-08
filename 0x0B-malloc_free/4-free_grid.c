#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D array
 * @grid: grid to be freed 
 * @height: height of array
 * Return: pointer to 2D array
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
free(grid);
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
