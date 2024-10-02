/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:23:42 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 21:23:51 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyline_solver.h"

/*
 * Solve the grid using backtracking.
 * This recursive function tries to fill each cell with a valid number.
 * If a solution is found, it returns 1. If no solution is possible,
	it returns 0.
 * Parameters:
 *   grid: The 4x4 grid being solved
 *   num_view: Array of visibility clues
 *   row, col: Current position in the grid
 */
int	solve_grid(int grid[4][4], int num_view[16], int row, int col)
{
	int	num;

	if (row == 4)
		return (check_all_clues(grid, num_view));
	if (col == 4)
		return (solve_grid(grid, num_view, row + 1, 0));
	if (grid[row][col] != 0)
		return (solve_grid(grid, num_view, row, col + 1));
	num = 1;
	while (num <= 4)
	{
		if (is_safe(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve_grid(grid, num_view, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
