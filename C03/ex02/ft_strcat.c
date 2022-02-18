/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:15:42 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/16 20:55:32 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index_dest;
	int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
		index_dest++;
	while (src[index_src])
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
