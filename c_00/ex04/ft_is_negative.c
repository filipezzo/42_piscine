/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:24:49 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/19 14:23:14 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	message;

	if (n < 0)
	{
		message = 'N';
		write(1, &message, 1);
	}
	else
	{
		message = 'P';
		write(1, &message, 1);
	}
}
