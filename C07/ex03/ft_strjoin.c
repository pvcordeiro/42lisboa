/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:11:15 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/06 21:22:42 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	nstrcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (count);
}

int	t_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		length += ft_strlen(sep) * (size - 1);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		f_len;
	int		i;
	int		j;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	f_len = t_length(size, strs, sep);
	result = malloc((f_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		j += nstrcpy(result + j, strs[i]);
		if (i < size - 1)
			j += nstrcpy(result + j, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char **strings;
	char *result;
	if (argc < 4)
	{
		printf("Usage: %s <separator> <string1> <string2>...\n",
		 argv[0]);
		return (1);
	}
	strings = malloc((argc - 2) * sizeof(char *));
	int i = 0;
	while (i < argc - 2)
	{
		strings[i] = argv[i + 2];
		i++;
	}
	result = ft_strjoin(argc - 2, strings, argv[1]);
	if (result)
	{
		printf("Result: %s\n", result);
		free (result);
	}
	free (strings);
	return (0);
}*/
