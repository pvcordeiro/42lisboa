/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:25:58 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/02 21:10:08 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int	n;
	int	pow;
	int	res;

	if (argc != 3)
	{
		printf("Usage: %s <n> <power>\n", argv[0]);
		return (1);
	}
	n = atoi(argv[1]);
	pow = atoi(argv[2]);
	res = ft_iterative_power(n, pow);
	printf("%i to the power of %i is %i\n", n, pow, res);
	return (0);
}*/
