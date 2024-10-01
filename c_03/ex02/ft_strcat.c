/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:39:45 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/01 13:05:22 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Concatenates src string to the end of dest string, then terminates it with the
null terminator. It won't work as intended if dest size can't accomodate
src + dest size.
*/

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dst_len;

	i = 0;
	dst_len = 0;
	while (dest[dst_len] != '\0')
		dst_len++;
	while (src[i] != '\0')
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
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
