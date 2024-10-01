/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:26:31 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/01 14:35:26 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	result;

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}
	result = ft_strlen(argv[1]);
	printf("%s length is %d\n", argv[1], result);
	return (0);
}*/
