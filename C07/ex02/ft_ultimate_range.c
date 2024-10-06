/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:25:19 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/06 19:10:43 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	r_size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r_size = (max - min);
	*range = malloc(r_size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < r_size)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (r_size);
}
/*
#include <stdio.h>
int     main(int argc, char *argv[])
{
        int *res;
        int max;
        int min;
        int size;

        if (argc != 3)
        {
                printf("Usage: %s <min> <max>\n", argv[0]);
                return (1);
        }
        min = atoi(argv[1]);
        max = atoi(argv[2]);

        size = ft_ultimate_range(&res, min, max);
        if (size == 0)
        {
                printf("First value should be lower than the second.\n");
                return (1);
        }
        printf("The range between %d and %d is %d.\n", min, max, size);

        free(res);
        return (0);
}*/
