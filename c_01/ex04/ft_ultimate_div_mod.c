/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:08:50 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/24 14:28:10 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_value;
	int	b_value;

	a_value = *a;
	b_value = *b;
	*a = a_value / b_value;
	*b = a_value % b_value;
}
/*
int     main(void)
{
        int test_a = 7;
	int test_b = 2;

        printf("Your input for A: %d and for B: %d\n", test_a, test_b);
        ft_ultimate_div_mod(&test_a, &test_b);
        printf("A / B is: %d and the remainder is: %d\n", test_a, test_b);
        return (0);
}*/
