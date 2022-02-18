/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*                                                                            */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:09:45 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/18 00:06:11 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *dest)
{
	int	index;

	index = 0;
	while (dest[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	index;
	unsigned int	index_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	index = len_dest;
	index_src = 0;
	if (nb <= len_dest)
		return (nb + len_src);
	while (index < nb && src[index_src])
	{
		dest[index] = src[index_src];
		index++;
		index_src++;
	}
	dest[index] = '\0';
	return (len_dest + len_src);
}

int main(void)
{
	char teste1[] = "aaaaaa";
	char teste2[] = "aaa";

	printf("%d", ft_strlcat(teste1, teste2, 6));
}
