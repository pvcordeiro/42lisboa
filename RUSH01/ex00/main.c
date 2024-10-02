/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:23:37 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 21:23:57 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyline_solver.h"
#include <unistd.h>

/*
 * Main solving function that orchestrates the entire solution process.
 * This function:
 * 1. Initializes the grid
 * 2. Parses the input string to get the clues
 * 3. Fills in easy cases
 * 4. Attempts to solve the grid
 * 5. Prints the solution or an error message
 */
void	solve_skyline(char *input)
{
	int	result[4][4];
	int	num_view[16];
	int	i;

	i = 0;
	initialize_grid(result);
	while (i < 16)
	{
		num_view[i] = input[2 * i] - '0';
		i++;
	}
	fill_easy_cases_rows(&num_view[8], &num_view[12], result);
	fill_easy_cases_cols(&num_view[0], &num_view[4], result);
	if (solve_grid(result, num_view, 0, 0) == 1)
		print_grid(result);
	else
		write(1, "Error\n", 6);
}

/*
 * Main function: Entry point of the program.
 * Checks if the correct number of arguments is provided,
 * then calls solve_skyline with the input string.
 */
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	solve_skyline(argv[1]);
	return (0);
}
