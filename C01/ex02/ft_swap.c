/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:26:32 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/24 14:28:54 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int     main(void)
{
        int test_a = 4;
        int test_b = 2;

        printf("Your input for A is: %d and for B is: %d\n", test_a, test_b);
        ft_swap(&test_a, &test_b);
        printf("Now A is: %d and B is: %d\n", test_a, test_b);
        return (0);
}*/
