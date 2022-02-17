/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:28:17 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/13 13:20:26 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	ft_print_error(void);
void	ft_setup(t_uint observers[GAME_BOARD]);

int	is_valid_len(char *str)
{
t_uint	index;

index = 0;
while (str[index])
	index++;
index += 1;
if (index / 2 == GAME_BOARD)
	return (TRUE);
return (FALSE);
}

void	ft_parser(char *str)
{
t_uint	len;
t_uint	index;
t_uint	observers[16];

index = 0;
len = 0;
if (is_valid_len(str))
	return (ft_print_error());
while (str[index])
{
	if (index % 2 == 0)
	{
		observers[len] = (t_uint)(str[index] - '0');
		len++;
	}
	index++;
}
ft_setup(observers);
}
