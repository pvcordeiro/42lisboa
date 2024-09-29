/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:07:27 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/24 13:49:57 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}
/*
int	main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6};
	int ar_size = sizeof(array) / sizeof(array[0]);
	int i;

	printf("Original: ");
	for (i = 0; i < ar_size; i++)
	{
		printf("%d", array[i]);
		if (i < ar_size - 1)
			printf(", ");
	}
	printf("\n");
	ft_rev_int_tab(array, ar_size);
	printf("Reversed: ");
	for (i = 0; i < ar_size; i++)
	{
		printf("%d", array[i]);
		if (i < ar_size - 1)
			printf(", ");	
	}
	printf("\n");
	
	return (0);
}*/
