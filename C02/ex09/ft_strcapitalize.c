/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:05:07 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/16 20:31:57 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	is_alphanum(char str)
{
	if (str >= 'a' && str <= 'z')
		return (TRUE);
	if (str >= 'A' && str <= 'Z')
		return (TRUE);
	if (str >= '0' && str <= '9')
		return (TRUE);
	return (FALSE);
}

char	*to_upper(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;
	unsigned int	lol;

	lol = 0;
	index = 0;
	str = to_upper(str);
	while (str[index])
	{
		if (is_alphanum(str[index]))
		{
			if (lol == FALSE)
				lol = TRUE;
			else if (lol == TRUE && str[index] >= 'A' && str[index] <= 'Z')
			{
				str[index] += 32;
			}
		}
		else
			lol = FALSE;
		index++;
	}
	return (str);
}
