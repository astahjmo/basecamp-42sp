/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:40:41 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/15 01:35:58 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= 'a' && str[index] <= 'z'
				|| str[index] >= 'A' && str[index] <= 'Z'))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
