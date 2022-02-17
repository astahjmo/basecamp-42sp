/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:00:50 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/07 23:14:54 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_putnbr(char number)
{
	write(0, &number, 1);
}

void	itoa(long number)
{
	char	buffer[10];
	int		unit;
	int		index;

	index = 0;
	buffer[0] = '0';
	while (number > 0)
	{
		unit = number % 10;
		buffer[index] = unit + '0';
		number = number / 10;
		index++;
	}
	while (index >= 0)
	{
		ft_print_putnbr(buffer[index--]);
	}
}

void	ft_putnbr(int nbr)
{
	long int	conver;

	conver = (long) nbr;
	if (conver < 0)
	{
		conver *= -1;
		ft_print_putnbr('-');
		itoa(conver);
	}
}
