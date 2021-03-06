/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:51:30 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/16 22:20:54 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;
	int	idx_2;

	idx = 0;
	if (!(to_find[idx]))
		return (str);
	while (str[idx])
	{
		idx_2 = 0;
		while (str[idx + idx_2] == to_find[idx_2])
		{
			if (!(to_find[idx_2 + 1]))
				return (&str[idx]);
			idx_2++;
		}
		idx++;
	}
	return (0);
}
