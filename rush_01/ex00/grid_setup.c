/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_setup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:23:30 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 21:53:26 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyline_solver.h"
#include <unistd.h>

/*
 * Initialize the 4x4 grid with zeros.
 * This function prepares the grid for solving by setting all values to 0.
 */
void	initialize_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

/*
 * Print the current state of the grid.

	* This function is used to display the solution or intermediate
	states for debugging.
 * It prints each number followed by a space, with a newline after each row.
 */
void	print_grid(int grid[4][4])
{
	int		i;
	int		j;
	char	g;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			g = '0' + grid[i][j];
			write(1, &g, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*
 * Fill in easy cases for rows based on left and right clues.
 * This function handles two simple cases:
 * 1. If a clue is 4, fill the row with 1,2,3,4 (left) or 4,3,2,1 (right)
 * 2. If a clue is 1, place 4 in the first (left) or last (right) position
 */
void	fill_easy_cases_rows(int *left_clues, int *right_clues, int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (left_clues[i] == 4 || right_clues[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				if (left_clues[i] == 4)
					grid[i][j] = j + 1;
				if (right_clues[i] == 4)
					grid[i][j] = 4 - j;
				j++;
			}
		}
		if (left_clues[i] == 1)
			grid[i][0] = 4;
		if (right_clues[i] == 1)
			grid[i][3] = 4;
		i++;
	}
}

/*
 * Fill in easy cases for columns based on up and down clues.
 * This function works similarly to fill_easy_cases_rows, but for columns.
 * It handles the same two simple cases for the up and down clues.
 */
void	fill_easy_cases_cols(int *up_clues, int *down_clues, int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (up_clues[i] == 4 || down_clues[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				if (up_clues[i] == 4)
					grid[j][i] = j + 1;
				if (down_clues[i] == 4)
					grid[j][i] = 4 - j;
				j++;
			}
		}
		if (up_clues[i] == 1)
			grid[0][i] = 4;
		if (down_clues[i] == 1)
			grid[3][i] = 4;
		i++;
	}
}
