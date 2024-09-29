/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paude-so <paude-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 03:07:28 by paude-so          #+#    #+#             */
/*   Updated: 2024/09/29 03:09:30 by paude-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// functions.c
void	ft_rev_int_tab(int *tab, int size);
int		el_in_tab(int *row);
void	get_cols(int col_tab[4], int tab[4][4], int col_num);

/*
 * Check that the passed line contains the right number of visible boxes,
 * "val" is the value given by the instruction
 * Row can represent either a row or a column
 */
int	check(int *row, int val)
{
	int	stock;
	int	cur;
	int	num;

	cur = 1;
	stock = row[0];
	num = 1;
	while (num < 4)
	{
		if (row[num] > stock)
		{
			cur++;
			stock = row[num];
		}
		num++;
	}
	if (cur == val && el_in_tab(row) == 0)
		return (1);
	else
		return (0);
}

/*
 * Reverses the row/column pass, makes it pass through check and
 * put it back in the right direction.
 * Allows you to use the same check function to check both directions
 * of one row/column
 */
int	check_reverse(int *row, int val)
{
	int	ret;

	ft_rev_int_tab(row, 4);
	ret = check(row, val);
	ft_rev_int_tab(row, 4);
	return (ret);
}

/*
 * Call the check functions then check_reverse on this line
 * val[n] is the value passed by the user for this line
 */
int	verif_rows(int tab[4][4], int *val)
{
	if (check(tab[0], val[8]) == 0 || check_reverse(tab[0], val[12]) == 0)
		return (0);
	if (check(tab[1], val[9]) == 0 || check_reverse(tab[1], val[13]) == 0)
		return (0);
	if (check(tab[2], val[10]) == 0 || check_reverse(tab[2], val[14]) == 0)
		return (0);
	if (check(tab[3], val[11]) == 0 || check_reverse(tab[3], val[15]) == 0)
		return (0);
	return (1);
}

/*
 * Call the check then check_reverse functions on each column
 * val[n] is the value passed by the user for this column
 * We use get_cols to put all the values ​​in test_tab
 * of the column.
 */
int	verif_cols(int tab[4][4], int *val)
{
	int	test_tab[4];

	get_cols(test_tab, tab, 0);
	if (check(test_tab, val[0]) == 0 || check_reverse(test_tab, val[4]) == 0)
		return (0);
	get_cols(test_tab, tab, 1);
	if (check(test_tab, val[1]) == 0 || check_reverse(test_tab, val[5]) == 0)
		return (0);
	get_cols(test_tab, tab, 2);
	if (check(test_tab, val[2]) == 0 || check_reverse(test_tab, val[6]) == 0)
		return (0);
	get_cols(test_tab, tab, 3);
	if (check(test_tab, val[3]) == 0 || check_reverse(test_tab, val[7]) == 0)
		return (0);
	return (1);
}

/*
 * Main function that calls the row check function
 * then columns
 */
int	verif(int tab[4][4], int *val)
{
	if (verif_rows(tab, val) == 0 || verif_cols(tab, val) == 0)
		return (0);
	return (1);
}
