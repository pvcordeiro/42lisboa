/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:02:08 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/20 20:19:53 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int     main(void)
{
        char    arr_source[] = "Teste";
        char    arr_destination[sizeof(arr_source)];
        
        printf("Values before for Source: %s and Destination: %s!\n", 
         arr_source, arr_destination);
        ft_strncpy(arr_destination, arr_source, sizeof(arr_destination));
        printf("Values after for Source: %s and Destination: %s!\n", 
         arr_source, arr_destination);
        return (0);
}*/
