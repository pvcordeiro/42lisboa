/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:26:44 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/30 14:42:30 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
int     main(int argc, char *argv[])
{
        int     result;

        if (argc != 3)
        {
                printf("Usage: %s <string1> <string2>\n", argv[0]);
                return (1);
        }

        result = ft_strcmp(argv[1], argv[2]);

        printf("%d\n", result);
        return (0);
}*/
