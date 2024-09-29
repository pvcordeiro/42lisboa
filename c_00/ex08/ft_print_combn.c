/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:23:11 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/26 21:46:50 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	n1;
	char	n2;

	n1 = '0';
	while (n1 <= '8')
	{
		n2 = n1 + 1;
		while (n2 <= '9')
		{
			write(1, &n1, 1);
			write(1, &n2, 1);
			if (n1 != '8')
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_combn();
	return (0);
}
