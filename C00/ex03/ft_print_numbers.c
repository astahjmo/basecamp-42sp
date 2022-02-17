/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <contato.johnatan06@gmail.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:19:40 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/07 20:26:13 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char letter)
{
	write(1, &letter, sizeof(letter));
}

void	ft_print_numbers(void)
{
	char	letter;

	letter = '0';
	while (letter <= '9')
	{
		ft_print(letter++);
	}
}
