/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:17:31 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/01 13:41:30 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_print_digit(int n);

/*int	main(void)
{
	ft_putnbr(123);
	ft_putnbr(42);
	ft_putnbr(-9);
	ft_putnbr(1);
}*/

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
		return ;
	}
	if (nb < 10)
	{
		ft_print_digit(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_print_digit(nb % 10);
	}
}

void	ft_print_digit(int n)
{
	n += 48;
	write(1, &n, 1);
}
