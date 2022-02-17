/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:20:53 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/09 01:43:44 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	temp;

	count2 = 0;
	count = 0;
	while (count < size - 1)
	{
		while (count2 < size - count - 1)
		{
			if (tab[count2] > tab[count2 + 1])
			{
				temp = tab[count2];
				tab[count2] = tab[count2 + 1];
				tab[count2 + 1] = temp;
			}
			count2++;
		}
		count2 = 0;
		count++;
	}
}
