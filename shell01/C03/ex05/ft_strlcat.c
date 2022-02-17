/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:09:45 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/14 16:24:49 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	while (nb-- > 0 && *src++)
	{
		dest[i] = *src;
		i++;
	}
	dest[i] = '\0';
	return (i);
}
