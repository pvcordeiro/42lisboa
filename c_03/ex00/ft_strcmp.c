/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:26:44 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/28 22:26:57 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	int	result;

	if (argc != 3)
	{
		printf("Please type 2 strings.\n");
		return (1);
	}
	result = ft_strcmp(argv[1], argv[2]);
	if (result == 0)
		printf("The strings are the same.\nOutput: %d\n", result);
	else if (result < 0)
		printf("\"%s\" comes before \"%s\"\nOutput: %d\n",
			argv[1], argv[2], result);
	else
		printf("\"%s\" comes before \"%s\"\nOutput: %d\n",
			argv[2], argv[1], result);
	return (0);
}*/
