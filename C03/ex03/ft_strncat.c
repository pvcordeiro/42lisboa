/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:44:56 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/01 13:08:41 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Does the same as strcat, except that it only concatenates src to dest until
the limit number defined in the 3rd argument
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dst_len;

	i = 0;
	dst_len = 0;
	while (dest[dst_len] != '\0')
		dst_len++;
	while (i < nb && src[i] != '\0')
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*result;
	unsigned int	max_n;

	if (argc != 4)
	{
		printf("Usage %s <string1> <string2> <n>\n", argv[0]);
		return (1);
	}
	max_n = atoi(argv[3]);

	result = ft_strncat(argv[1], argv[2], max_n);

	printf("%s\n", result);
	return (0);
}*/
