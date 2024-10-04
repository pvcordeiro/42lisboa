/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:19:25 by paude-so          #+#    #+#             */
/*   Updated: 2024/10/04 21:23:36 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef int t_bool;

#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 == 0)
#define EVEN_MSG "I have and even number of arguments. \n"
#define ODD_MSG "I have and odd number of arguments \n"

#endif
