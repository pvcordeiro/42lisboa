/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:32:27 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/16 14:51:16 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_checker(char character, char *charset)
{
	while (*charset)
	{
		if (*charset == character)
			return (1);
		charset++;
	}
	return (0);
}

int	substr_count(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!str_checker(*str, charset))
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *str, int size)
{
	int		i;
	char	*dup;

	dup = malloc(size + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	substr_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !str_checker(str[i], charset))
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		substr_size;
	int		i;
	int		substrs;

	substrs = substr_count(str, charset);
	arr = malloc((substrs + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (!str_checker(*str, charset))
		{
			substr_size = substr_len(str, charset);
			arr[i] = ft_strdup(str, substr_size);
			if (!arr[i])
				return (NULL);
			i++;
			str += substr_size;
		}
		str++;
	}
	arr[i] = NULL;
	return (arr);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	**result;
	int		i;

	i = 0;
	if (argc != 3)
	{
		printf("Usage: %s <string> <charset>\n", argv[0]);
		return (1);
	}
	result = ft_split(argv[1], argv[2]);
	if (!result)
	{
		printf("Malloc Failed");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("Substring %d: %s\n", i, result[i]);
		i++;
	}
	free(result);
	return (0);
}
