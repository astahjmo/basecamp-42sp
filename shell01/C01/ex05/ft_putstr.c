/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 08:52:13 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/05 09:04:26 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char letter)
{
	write(1, &letter, 1);
}

void	ft_putstr(char *str)
{
	unsigned short int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_print(str[index]);
		index++;
	}
}
