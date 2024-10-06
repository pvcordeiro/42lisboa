/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:56:50 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/06 13:10:12 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
#include <stdlib.h>
int     main(int argc, char *argv[])
{
        int     n;
        int     pow;
        int     res;

        if (argc != 3)
        {
                printf("Usage: %s <n> <power>\n", argv[0]);
                return (1);
        }
        n = atoi(argv[1]);
        pow = atoi(argv[2]);
        res = ft_recursive_power(n, pow);
        printf("%i to the power of %i is %i\n", n, pow, res);
        return (0);
}
