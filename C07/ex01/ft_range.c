/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:48:57 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/06 21:24:22 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	r_size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	r_size = (max - min);
	range = malloc(r_size * sizeof(int));
	i = 0;
	while (i < r_size)
	{
		range[i] = (min + i);
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int *res;
	int max;
	int min;
	int i;

	if (argc != 3)
	{
		printf("Usage: %s <min> <max>\n", argv[0]);
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);

	res = ft_range(min, max);
	if (!res)
	{
		printf("First value should be lower than the second.\n");
		return (1);
	}
	printf("The range between %s and %s is:\n", argv[1], argv[2]);
	i = 0;
	while (i < (max - min))
	{
		printf("%d", res[i]);
		if (i < (max - min) - 1)
			printf(", ");
		i++;
	}
	printf("\n");

	free(res);
	return (0);
}*/
