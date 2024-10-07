/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:17:26 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/07 15:11:48 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}			t_stock_str;

void		ft_show_tab(struct s_stock_str *par);
t_stock_str	*ft_strs_to_tab(int ac, char **av);
int			ft_strlen(char *str);
char		*pv_strcpy(char *str, int size);
void		ft_putnbr(int nb);

#endif
