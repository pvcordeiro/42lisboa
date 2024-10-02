/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:51:49 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/01 18:04:32 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	f_nbr;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	f_nbr = (n % 10) + '0';
	write(1, &f_nbr, 1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int     main(int argc, char *argv[])
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
