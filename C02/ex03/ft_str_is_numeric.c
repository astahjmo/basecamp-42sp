/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:40:41 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/15 14:30:07 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
			return (0);
		index++;
	}
	return (1);
}
