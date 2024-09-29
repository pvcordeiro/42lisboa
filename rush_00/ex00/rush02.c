/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:33:39 by mananton          #+#    #+#             */
/*   Updated: 2024/09/22 21:43:35 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('A');
		if (x == 1)
			ft_putchar('\n');
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
	}
}

void	end_line(int x)
{
	int	i;

	i = 1;
	if (x > 0)
	{
		ft_putchar('C');
		if (x == 1)
			ft_putchar('\n');
		while (i < x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
	}
}

void	middle_line(int x)
{
	int	i;
	int	z;

	i = 1;
	z = 1;
	if (x >= 1)
		ft_putchar('B');
	while (i < x - 1)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	z;
	int	w;

	i = 1;
	z = x - 2;
	w = y - 2;
	if (x <= 0 || y <= 0)
	{
		write(1, "Please input a positive integer\n", 32);
		return ;
	}
	if (y >= 1)
		first_line(x);
	while (w >= 1)
	{
		middle_line(x);
		ft_putchar('\n');
		w--;
	}
	if (y > 1)
		end_line(x);
	return ;
}
