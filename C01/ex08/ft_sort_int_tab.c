/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:46:28 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/24 17:50:31 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	end;
	int	bubble;

	i = 0;
	end = size - 1;
	bubble = 1;
	while (bubble)
	{
		bubble = 0;
		i = 0;
		while (i < end)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			bubble = 1;
			i++;
		}
		end--;
	}
}
/*
int     main(void)
{
        int array[] = {67, 24, 43, 22, 87, 23};
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
        ft_sort_int_tab(array, ar_size);
        printf("Ordered: ");
        for (i = 0; i < ar_size; i++)
        {
                printf("%d", array[i]);
                if (i < ar_size - 1)
                        printf(", ");   
        }
        printf("\n");
        
        return (0);
}*/
