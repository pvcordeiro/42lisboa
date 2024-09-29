/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:39:44 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/25 01:14:45 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	arr_source[] = "ABC";
	char	arr_destination[sizeof(arr_source)];

	printf("Values before for Source: %s and Destination: %s!\n",
	 arr_source, arr_destination);
	ft_strcpy(arr_destination, arr_source);
	printf("Values after for Source: %s and Destination: %s!\n",
	 arr_source, arr_destination);
	return (0);
}*/
