/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:49:49 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/08 21:21:08 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int     main(int argc, char *argv[])
{
        int     result;
        int     converted;

        if (argc < 2)
        {
                printf("Usage: %s <n>\n", argv[0]);
                return (1);
        }
        converted = atoi(argv[1]);
        result = ft_find_next_prime(converted);
        printf("%d", result);
        return (0);
}*/
