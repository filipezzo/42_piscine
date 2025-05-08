/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:51:44 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/05 08:55:34 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(10));
// 	printf("%d\n", ft_sqrt(25));
// 	printf("%d\n", ft_sqrt(36));
// }

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
