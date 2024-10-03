/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:41:48 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/03 12:31:55 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int     main(int argc, char *argv[])
{
        int     n;
        int     res;

        if (argc != 2)
        {
                printf("Usage: %s <n>\n", argv[0]);
                return (1);
        }
        n = atoi(argv[1]);
        res = ft_sqrt(n);
        printf("The squareroot of %d is %d\n", n, res);
        return (0);
}*/
