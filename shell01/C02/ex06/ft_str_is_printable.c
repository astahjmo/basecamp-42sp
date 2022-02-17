/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:42:35 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/15 14:42:44 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= ' ' && str[index] <= '~'))
			return (0);
		index++;
	}
	return (1);
}
