/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:21:21 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/09 01:20:23 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;
	int	rindex;

	rindex = size - 1;
	index = 0;
	while (index <= size / 2)
	{
		temp = tab[rindex];
		tab[rindex] = tab[index];
		tab[index] = temp;
		index++;
		rindex--;
	}
}
