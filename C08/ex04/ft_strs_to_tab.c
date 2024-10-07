/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:52:29 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/07 16:42:40 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*pv_strcpy(char *str, int size)
{
	char	*cp;
	int		i;

	cp = malloc(sizeof(char) * (size + 1));
	if (!cp)
		return (NULL);
	i = 0;
	while (str[i])
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = pv_strcpy(av[i], arr[i].size);
		if (!arr[i].copy)
		{
			while (i > 0)
				free(arr[--i].copy);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	t_stock_str	*result;
	int	i;

	if (argc < 2)
	{
		printf("Usage: %s <string1> <string2>...\n", argv[0]);
	}
	result = ft_strs_to_tab(argc - 1, argv + 1);
	printf("\n");
	i = 0;
	while (i < argc - 1)
	{
		printf("String: %s\n", result[i].str);
		printf("Size: %d\n", result[i].size);
		printf("Copied: %s\n", result[i].copy);
		printf("\n");
		i++;
	}
	return (0);
}*/
