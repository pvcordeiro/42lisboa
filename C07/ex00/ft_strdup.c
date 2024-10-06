/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 19:19:27 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/06 12:42:50 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		src_len;
	char	*src_start;
	char	*dup_start;

	src_start = src;
	src_len = 0;
	while (*src)
	{
		src++;
		src_len++;
	}
	dup = malloc((src_len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	dup_start = dup;
	while (*src_start)
	{
		*dup = *src_start;
		src_start++;
		dup++;
	}
	*dup = '\0';
	return (dup_start);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}

	printf("Original: %s\n", argv[1]);
	printf("Duplicated: %s\n", ft_strdup(argv[1]));

	return (0);
}*/
