/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 02:20:06 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/27 12:48:50 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
		int result = ft_str_is_uppercase(args);
        	printf("Is %s only uppercase? ", args);
		if (result == 0)
			printf("No\n");
		else
			printf("Yes\n");
		i++;
	}
        return (0);
}*/
