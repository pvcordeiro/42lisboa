/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:09:39 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/10 20:29:28 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	stringlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid_base(char *base)
{
	char	*diff;

	if (stringlen(base) <= 1)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		diff = base + 1;
		while (*diff)
		{
			if (*base == *diff)
				return (0);
			diff++;
		}
		base++;
	}
	return (1);
}

int	pv_isspace(char *str, int *i, int *sign)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32 || str[*i] == '-'
		|| str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign = -(*sign);
		(*i)++;
	}
	return (*i);
}

int	get_base_i(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;
	int	base_len;
	int	base_i;

	i = 0;
	result = 0;
	sign = 1;
	if (!is_valid_base(base))
		return (0);
	base_len = stringlen(base);
	pv_isspace(str, &i, &sign);
	base_i = get_base_i(str[i], base);
	while (base_i != -1)
	{
		result = result * base_len + base_i;
		i++;
		base_i = get_base_i(str[i], base);
	}
	return (result * sign);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	res;
	if (argc == 3)
	{
		res = ft_atoi_base(argv[1], argv[2]);
		printf("%s at base %s is %d\n",argv[1], argv[2], res);
	}
	return (0);
}*/
