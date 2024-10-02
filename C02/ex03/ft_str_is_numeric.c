/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 02:01:23 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/25 20:30:38 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main(int argc, char *argv[])
{
        if (argc < 2)
        {
                printf("Error: You need to input at least 1 string\n");
                return (1);
        }

        int i = 1;
        while (i < argc)
        {
                char *args = argv[i];
                int result = ft_str_is_numeric(args);
                printf("Is %s only numbers? ", args);
                if (result == 0)
                        printf("No\n");
                else
                        printf("Yes\n");
                i++;
        }
        return (0);
}*/
