/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:40:34 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/01 13:14:27 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatenates string src to the end of string dest, the size arg sets a limit
buffer size in the dest string. If buffer is smaller than dest + src length
it returns the buffer size necessary to successfully complete the concatenation
minus the null terminator. It stills concatenates it until it hits the limit
of the provided size.
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dest[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	unsigned int	result;
	unsigned int	max_n;

	if (argc != 4)
	{
		printf("Usage %s <string1> <string2> <n>\n", argv[0]);
		return (1);
	}
	max_n = atoi(argv[3]);

	result = ft_strlcat(argv[1], argv[2], max_n);

	printf("%s\n%d\n", argv[1], result);
	return (0);
}*/
