/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:19:59 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/13 16:48:25 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

// Diretives
# define GAME_BOARD 16
# define ROWS 4
# define COLUMNS 4

# define TRUE 0
# define FALSE 1

// vars type
typedef unsigned int	t_uint;

// Functions prototype

t_uint	*create_board(t_uint board[ROWS][COLUMNS]);

void	ft_print_number(t_uint number);
void	ft_print(char str);

#endif
