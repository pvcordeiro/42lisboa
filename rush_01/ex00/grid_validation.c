/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:23:34 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 21:27:48 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyline_solver.h"

/*
 * Check if it's safe to place a number in a given position.

	* This function ensures that the same number doesn't appear twice in
	the same row or column.
 * Returns 1 if it's safe to place the number, 0 otherwise.
 */
int	is_safe(int grid[4][4], int row, int col, int num)
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		if (grid[row][x] == num && x != col)
			return (0);
		x++;
	}
	y = 0;
	while (y < 4)
	{
		if (grid[y][col] == num && y != row)
			return (0);
		y++;
	}
	return (1);
}

/*
 * Count the number of visible boxes in a line.
 * This function simulates looking from one end of a row/column and counts
 * how many boxes are visible (not hidden behind taller boxes).
 */
int	count_visible_boxes(int *line)
{
	int	count;
	int	max;
	int	i;

	count = 1;
	max = line[0];
	i = 1;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

/*
 * Check if a row satisfies its visibility clues.
 * This function checks both left and right clues for a given row.
 * Returns 1 if the row satisfies both clues, 0 otherwise.
 */
int	check_row_visibility(int grid[4][4], int num_view[16], int row)
{
	int	left_num;
	int	right_num;
	int	line[4];
	int	i;

	left_num = num_view[8 + row];
	right_num = num_view[12 + row];
	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][i];
		i++;
	}
	if (count_visible_boxes(line) != left_num)
		return (0);
	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][3 - i];
		i++;
	}
	if (count_visible_boxes(line) != right_num)
		return (0);
	return (1);
}

/*
 * Check if a column satisfies its visibility clues.
 * This function checks both up and down clues for a given column.
 * Returns 1 if the column satisfies both clues, 0 otherwise.
 */
int	check_col_visibility(int grid[4][4], int num_view[16], int col)
{
	int	up_num;
	int	down_num;
	int	line[4];
	int	i;

	up_num = num_view[col + 0];
	down_num = num_view[col + 4];
	i = 0;
	while (i < 4)
	{
		line[i] = grid[i][col];
		i++;
	}
	if (count_visible_boxes(line) != up_num)
		return (0);
	i = 0;
	while (i < 4)
	{
		line[i] = grid[3 - i][col];
		i++;
	}
	if (count_visible_boxes(line) != down_num)
		return (0);
	return (1);
}

/*
 * Check if the entire grid satisfies all clues.
 * This function checks all rows and columns against their respective clues.
 * Returns 1 if all clues are satisfied, 0 otherwise.
 */
int	check_all_clues(int grid[4][4], int num_view[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row_visibility(grid, num_view, i)
			|| !check_col_visibility(grid, num_view, i))
			return (0);
		i++;
	}
	return (1);
}
