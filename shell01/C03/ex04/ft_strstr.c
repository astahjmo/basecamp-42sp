/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:51:30 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/10 19:42:53 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*from;
	char	*substr;

	while (*str)
	{
		from = str;
		substr = to_find;
		while ((*str != '\0') && (*substr != '\0') && (*str == *substr))
		{
			str++;
			substr++;
		}
		if (*substr == '\0')
			return (from);
		str = from + 1;
	}
	return ("\0");
}
