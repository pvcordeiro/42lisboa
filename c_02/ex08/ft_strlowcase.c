/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:49:46 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/25 20:22:41 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
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
		ft_strlowcase(args);
		printf("%s\n", args);
		i++;
	}
	return (0);
}*/
