/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:47:47 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/17 17:54:28 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_dest;
	unsigned int	index_src;
	unsigned int	counter;

	counter = 0;
	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
		index_dest++;
	while (src[index_src] && counter < nb)
	{
		dest[index_dest] = src[index_src];
		counter++;
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
