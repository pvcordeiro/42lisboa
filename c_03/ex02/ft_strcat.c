/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:45 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/30 14:44:21 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_length;
	unsigned int	i;

	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	
	if (argc != 3)
	{
		printf ("Usage: %s <string1> <string2>\n", argv[0]);
		return (1);
	}

	char	*result = ft_strcat(argv[1], argv[2]);
	
	printf("%s\n", result);
	return (0);
}*/
