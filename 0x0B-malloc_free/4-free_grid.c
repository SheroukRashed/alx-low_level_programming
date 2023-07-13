#include "main.h"
/**
 * free_grid - Entry point
 *
 * Description: 'This program will free grid
 *
 * @grid: Char** to be tested
 * @height: Int to be tested
 *
 * Return: Void (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
