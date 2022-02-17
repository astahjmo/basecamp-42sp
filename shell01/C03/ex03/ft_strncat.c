/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:47:47 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/10 02:15:03 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
    i = 0;
    while(dest[i])
      i++;
    while(nb-- > 0 )
        dest[i++] = *src++;
	dest[i] = '\0';
    return (dest);
}