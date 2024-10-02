/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:06:10 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/23 22:54:47 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int     main(void)
{
        int test_a = 4;
        int test_b = 2;
	int div;
	int mod;

        printf("Your input for A: %d and for B: %d\n", test_a, test_b);
        ft_div_mod(test_a, test_b, &div, &mod);
        printf("A / B is: %d and the remainder is: %d\n", div, mod);
        return (0);
}*/
