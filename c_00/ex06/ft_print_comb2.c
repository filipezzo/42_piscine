/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:27:01 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/20 11:54:08 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	*options;

	a = 0;
	options = "0123456789";
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &options[a / 10], 1);
			write(1, &options[a % 10], 1);
			write(1, " ", 1);
			write(1, &options[b / 10], 1);
			write(1, &options[b % 10], 1);
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
