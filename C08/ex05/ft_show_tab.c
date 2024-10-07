/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:52:37 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/07 16:41:30 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		print;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	print = nb % 10 + '0';
	write(1, &print, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}
	printf("\n");
	ft_show_tab(ft_strs_to_tab(argc - 1, argv + 1));
	printf("\n");
	return (0);
}*/
