/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:21:07 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/25 19:37:02 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
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
		ft_strupcase(args);
		printf("%s\n", args);
		i++;
	}
	return (0);
}*/
