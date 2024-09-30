/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:32:19 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/30 14:44:02 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdlib.h>
#include <stdio.h>
int     main(int argc, char *argv[])
{
        int     result;
	unsigned int	max_n;

	if (argc != 4)
	{
		printf("Usage: %s <string1> <string2> <n>\n", argv[0]);
		return (1);
	}
	max_n = atoi(argv[3]);

        result = ft_strncmp(argv[1], argv[2], max_n);

	printf("%d\n", result);
        return (0);
}*/
