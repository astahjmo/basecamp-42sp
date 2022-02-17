/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:09:54 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/13 17:20:45 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

t_uint	*create_board(t_uint board[ROWS][COLUMNS])
{
	t_uint	index;
	t_uint	rows;
	t_uint	colums;
	t_uint	*board_pnt;

	rows = 0;
	while (rows < ROWS)
	{
		colums = 0;
		while (colums < COLUMNS)
		{
			board[rows][colums] = 0;
			ft_print_number(board[rows][colums]);
			ft_print(' ');
			colums++;
		}
		ft_print('\n');
		rows++;
	}
	return (*board);
}
