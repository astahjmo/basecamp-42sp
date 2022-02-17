/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:11:47 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/09 15:07:08 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char arr[])
{
	write(1, arr, 3);
	if (arr[0] != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = '0';
	arr[1] = '1';
	arr[2] = '2';
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				ft_print_char(arr);
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}

int main(void)
{
	ft_print_comb();
}
