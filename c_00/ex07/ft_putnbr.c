/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:20:23 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/26 20:18:41 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}
/*
int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Please input a number\n");
		return (1);
	}

	int i = 1;
	while (i < argc)
	{	
		int args = atoi(argv[i]);
		ft_putnbr(args);
		i++;
	}
	printf("\n");
	return (0);
}*/
