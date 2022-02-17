/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:38:43 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/15 01:07:42 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index > n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index++ < n)
		dest[index] = '\0';
	return (dest);
}
