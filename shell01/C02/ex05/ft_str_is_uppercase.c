/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:28 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/15 14:41:19 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
			return (0);
		index++;
	}
	return (1);
}
