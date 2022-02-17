/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:50:52 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/13 12:45:02 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_parser(char *str);
void	ft_print_error(void);

int	main(int argc, char *argv[])
{
	if (!(argc != 2))
		ft_parser(argv[1]);
	else
		ft_print_error();
}
