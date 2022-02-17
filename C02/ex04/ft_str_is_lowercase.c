/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:30:50 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/15 14:34:59 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'))
			return (0);
		index++;
	}
	return (1);
}
