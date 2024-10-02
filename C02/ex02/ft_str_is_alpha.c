/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 00:30:53 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/25 20:39:35 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	uppercase;
	int	lowercase;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		uppercase = ('A' <= str[i] && str[i] <= 'Z');
		lowercase = ('a' <= str[i] && str[i] <= 'z');
		if (!(uppercase || lowercase))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main(int argc, char *argv[])
{
        if (argc < 2)
        {
                printf("Error: You need to input at least 1 string\n");
                return (1);
        }
	
	char *args;
        int i = 1;
        while (i < argc)
        {
                args = argv[i];
                int result = ft_str_is_alpha(args);
                printf("Is \"%s\" only letters? ", args);
                if (result == 0)
                        printf("No\n");
                else
                        printf("Yes\n");
                i++;
        }
        return (0);
}*/
