/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_permut.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 02:57:39 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 03:00:42 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The Heap algorithm generates all the permutations of a set
 * of n objects. It was first proposed by B. R. Heap in 19631.
 * Source : Wikipedia
 */

int		g_permut[24][4];
int		g_cur;

/*
 * Put x in y and y in x
 */
void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/*
 * Added the "v" combination to the "g_permut" combination list
 */
void	add_permut(const int *v)
{
	g_permut[g_cur][0] = v[0];
	g_permut[g_cur][1] = v[1];
	g_permut[g_cur][2] = v[2];
	g_permut[g_cur][3] = v[3];
	g_cur = g_cur + 1;
}

/*
 * Recursive implementation of the Heap algorithm
 */
void	heappermute(int c[], int n)
{
	int	i;

	if (n == 1)
		add_permut(c);
	else
	{
		i = 0;
		while (i < n)
		{
			heappermute(c, n - 1);
			if (n % 2 == 1)
				swap(&c[0], &c[n - 1]);
			else
				swap(&c[i], &c[n - 1]);
			i++;
		}
	}
}

/*
 * Copy each element of "told" into tnew
 */
void	copy_array(int told[24][4], int tnew[24][4])
{
	int	cur1;
	int	cur2;

	cur1 = 0;
	while (cur1 < 24)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			tnew[cur1][cur2] = told[cur1][cur2];
			cur2++;
		}
		cur1++;
	}
}

/*
 * Generates permutations and copies in the "permut"
 * table pass in parameters
 */
void	get_permut(int permut[24][4])
{
	int	el[4];

	el[0] = 1;
	el[1] = 2;
	el[2] = 3;
	el[3] = 4;
	g_cur = 0;
	heappermute(el, 4);
	copy_array(g_permut, permut);
}
