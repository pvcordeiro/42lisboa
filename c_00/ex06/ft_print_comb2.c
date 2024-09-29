/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:09:40 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/26 19:19:40 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	counter_a;
	int	counter_b;

	counter_a = 0;
	while (counter_a <= 98)
	{
		counter_b = counter_a + 1;
		while (counter_b <= 99)
		{
			ft_putchar(counter_a / 10 + '0');
			ft_putchar(counter_a % 10 + '0');
			ft_putchar(' ');
			ft_putchar(counter_b / 10 + '0');
			ft_putchar(counter_b % 10 + '0');
			if (counter_a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			counter_b++;
		}
		counter_a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
