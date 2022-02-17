/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:23:07 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/13 16:28:11 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include <unistd.h>

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_print_number(t_uint number)
{
	char	char_number;

	char_number = (char)(number + '0');
	write(1, &char_number, 1);
}

void	ft_print(char str)
{
	write(1, &str, 1);
}
