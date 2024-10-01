/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:26:40 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/01 13:13:54 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Looks through the string searching for the first char in to_find, if it finds a
match, it starts to check if the subsequent characters in the string are also
the same from to_find. If it is, it returns the string pointer from the first 
found character onwards.
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char *ret;

	if (argc != 3)
	{
		printf("Usage: %s <string1> <string2>\n", argv[0]);
		return (1);
	}
	ret = ft_strstr(argv[1], argv[2]);
	printf("Found: %s\n", ret);
	return (0);
}*/
