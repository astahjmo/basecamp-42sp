/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:35:12 by johmatos          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/16 19:34:05 by johmatos         ###   ########.fr       */
=======
/*   Updated: 2022/02/17 20:18:49 by johmatos         ###   ########.fr       */
>>>>>>> 15574a7 (att)
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
<<<<<<< HEAD
	while (*src)
	{
		dest[index] = *src;
		src++;
=======
	while (src[index])
	{
		dest[index] = src[index];
>>>>>>> 15574a7 (att)
		index++;
	}
	return (dest);
}
