/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:21:19 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/03 12:33:57 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int	result;
	int	converted;

	if (argc < 2)
	{
		printf("Usage: %s <n>\n", argv[0]);
		return (1);
	}
	converted = atoi(argv[1]);
	result = ft_fibonacci(converted);
	printf("%d", result);
	return (0);
}*/
