/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:33:40 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/02 17:24:48 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i > 1)
	{
		nb *= (i - 1);
		i--;
	}
	return (nb);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i = 1;
	int	args;
	int	result;

	if (argc < 2)
	{
		printf("Usage: %s <n>\n", argv[0]);
		return (1);
	}
	while (i < argc)
	{	
		args = atoi(argv[i]);
		result = ft_iterative_factorial(args);
		printf("The factorial of %d is %d.\n", args, result);
		i++;
	}
	return (0);
}*/
