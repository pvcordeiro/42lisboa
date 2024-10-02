/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyline_solver.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:23:40 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 21:23:54 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYLINE_SOLVER_H
# define SKYLINE_SOLVER_H

// Initialize the 4x4 grid with zeros
void	initialize_grid(int grid[4][4]);

// Print the current state of the grid
void	print_grid(int grid[4][4]);

// Fill in easy cases for rows based on left and right clues
void	fill_easy_cases_rows(int *left_clues, int *right_clues, int grid[4][4]);

// Fill in easy cases for columns based on up and down clues
void	fill_easy_cases_cols(int *up_clues, int *down_clues, int grid[4][4]);

// Check if it's safe to place a number in a given position
int		is_safe(int grid[4][4], int row, int col, int num);

// Count the number of visible boxes in a line
int		count_visible_boxes(int *line);

// Check if a row satisfies its visibility clues
int		check_row_visibility(int grid[4][4], int num_view[16], int row);

// Check if a column satisfies its visibility clues
int		check_col_visibility(int grid[4][4], int num_view[16], int col);

// Check if the entire grid satisfies all clues
int		check_all_clues(int grid[4][4], int num_view[16]);

// Solve the grid using backtracking
int		solve_grid(int grid[4][4], int num_view[16], int row, int col);

// Main solving function that orchestrates the entire solution process
void	solve_skyline(char *input);

#endif
