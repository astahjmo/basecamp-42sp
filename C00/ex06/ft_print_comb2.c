/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:21:16 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/09 15:12:43 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_two(int n)
{
	char	c1;
	char	c2;

	if (n < 10)
	{
		c1 = n + '0';
		write(1, "0", 1);
		write(1, &c1, 1);
	}
	else
	{
		c1 = (n / 10) + 48;
		c2 = (n % 10) + 48;
		write(1, &c1, 1);
		write(1, &c2, 1);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 99)
	{
		num2 = 0;
		while (num2 <= 99)
		{
			if (num1 < num2)
			{
				if (!(num1 == 0 && num2 == 1))
				{
					write(1, ", ", 2);
				}
				ft_print_two(num1);
				write(1, " ", 1);
				ft_print_two(num2);
			}
			num2++;
		}
		num1++;
	}
}

int main()
{
	ft_print_comb2();
}
