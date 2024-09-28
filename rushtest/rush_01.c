/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:00 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/28 20:19:58 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int n, char **conds);
void	print_error(void);
char	**create_conds(int n, char *str);
char	**new_matrix(int n1, int n2);
void	free_matrix(char **matrix, int n);
void	ft_putchar(char c);
void	print_solution(char **board, int n);
int	in_column(char **board, int row, int col, int digit);
int	in_row(char **board, int row, int col, int digit);
void	rush_recursive(char **board, int row, int col, int n);
int     ft_strlen(char *str);

int	main(int argc, char **argv)
{	
	int		dim;
	char	**conds;

	if (argc != 2)
	{
		print_error();
		return (1);
	}
	if (ft_strlen(argv[1]) > 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	dim = 4;
	conds = create_conds(dim, argv[1]);
	if (conds == NULL)
	{
		print_error();
		return (1);
	}
	rush(dim, conds);
	free_matrix(conds, 4);
	return (0);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	print_solution(char **board, int n)
{
	int	i;
	int	k;

	i = 1;
	while (i <= n)
	{
		k = 1;
		while (k <= n)
		{
			ft_putchar(board[i][k++]);
			if (k != n + 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

char	**new_matrix(int n1, int n2)
{
	char	**matrix;
	int		i;

	matrix = (char **)malloc(n1 * sizeof(char *));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < n1)
	{
		matrix[i] = (char *)malloc(n2 * sizeof(char));
		if (!matrix[i])
		{
			while (--i >= 0)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		i++;
	}
	return (matrix);
}

void	free_matrix(char **matrix, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

char	**create_conds(int n, char *str)
{
	char	**conds;
	int		i;
	int		k;

	i = 0;
	k = 0;
	conds = new_matrix(4, n);
	if (!conds)
		return (NULL);
	while (k < n * 4)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			conds[k / n][k % n] = str[i];
			k++;
		}
		i++;
	}
	return (conds);
}

int	in_row(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < col)
	{
		if (board[row][i++] == digit + '0')
			return (1);
	}
	return (0);
}

int	in_column(char **board, int row, int col, int digit)
{
	int	i;

	i = 1;
	while (i < row)
	{
		if (board[i++][col] == digit + '0')
			return (1);
	}
	return (0);
}

char	**create_board(int n)
{
	char	**board;
	int		i;
	int		k;

	board = new_matrix(n + 2, n + 2);
	i = 0;
	while (i < n + 2)
	{
		k = 0;
		while (k < n + 2)
			board[i][k++] = '0';
		i++;
	}
	return (board);
}

void	rush_recursive(char **board, int row, int col, int n)
{
	int	i;

	i = 1;
	while (i <= n && row != n + 1 && col != n + 1)
	{
		if (!in_column(board, row, col, i) && !in_row(board, row, col, i))
		{
			board[row][col] = i + '0';
			if (col == n)
			{
				rush_recursive(board, row + 1, 1, n);
			}
			else
				rush_recursive(board, row, col + 1, n);
			return ;
		}
		i++;
	}
}

void	set_conditions(char **board, char **conds, int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		board[0][i] = conds[0][i - 1];
		board[n + 1][i] = conds[1][i - 1];
		board[i][0] = conds[2][i - 1];
		board[i][n + 1] = conds[3][i - 1];
		i++;
	}
}

void	rush(int n, char **conds)
{
	char	**board;

	board = create_board(n);
	set_conditions(board, conds, n);
	rush_recursive(board, 1, 1, n);
	print_solution(board, n);
	free_matrix(board, n + 2);
}
