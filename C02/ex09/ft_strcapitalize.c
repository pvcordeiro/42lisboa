/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:09:59 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 13:51:38 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_char_is_alphanumeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if (i == 0 || !ft_char_is_alphanumeric(str[i - 1]))
		{
			if (ft_char_is_alphanumeric(str[i]))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Please input at least 1 string");
	}
	
	int i = 1;
	while (i < argc)
	{
		char *args = argv[i];
		ft_strcapitalize(args);
		printf("%s ", args);
		i++;
	}
	printf("\n");
	return (0);
}*/
