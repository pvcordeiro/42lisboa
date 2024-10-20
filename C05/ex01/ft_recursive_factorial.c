/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:48:02 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/20 20:20:44 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdlib.h>
#include <stdio.h>
int     main(int argc, char *argv[])
{
        int     i = 1;
        int     args;
        int     result;

        if (argc < 2)
        {
                printf("Usage: %s <n>\n", argv[0]);
                return (1);
        }
        while (i < argc)
        {       
                args = atoi(argv[i]);
                result = ft_recursive_factorial(args);
                printf("The factorial of %d is %d.\n", args, result);
                i++;
        }
        return (0);
}*/
