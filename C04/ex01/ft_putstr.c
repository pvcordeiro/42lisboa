/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:35:41 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/02 14:26:02 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr("42 is for the brave!");
	return (0);
}
*/
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}
	ft_putstr(argv[1]);
	return (0);
}*/
