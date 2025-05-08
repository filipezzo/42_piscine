/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:44:53 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/19 14:24:27 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_writes(char first_digit, char second_digit, char third_digit);

void	ft_print_comb(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0';
	while (first_digit <= '7')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '8')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				ft_writes(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
}

void	ft_writes(char first_digit, char second_digit, char third_digit)
{
	write(1, &first_digit, 1);
	write(1, &second_digit, 1);
	write(1, &third_digit, 1);
	if (!(first_digit == '7' && second_digit == '8' && third_digit == '9'))
	{
		write(1, ", ", 2);
	}
}
