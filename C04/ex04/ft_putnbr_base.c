/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:03:37 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/10 20:29:13 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	stringlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	char	*diff;

	if (stringlen(base) <= 1)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		diff = base + 1;
		while (*diff)
		{
			if (*base == *diff)
				return (0);
			diff++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	digit;
	long	n;
	int		base_size;

	if (!is_valid_base(base))
		return ;
	base_size = stringlen(base);
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (n >= base_size)
		ft_putnbr_base(n / base_size, base);
	digit = base[n % base_size];
	write(1, &digit, 1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s <number> <base>\n", argv[0]);
		return (1);
	}
	int	n = atoi(argv[1]);
	ft_putnbr_base(n, argv[2]);
	printf(" is %d in base %s\n", n, argv[2]);
	return (0);
}*/
