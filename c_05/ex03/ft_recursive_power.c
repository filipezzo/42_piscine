/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:34:26 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/05 08:40:51 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(4, 3));
// 	printf("%d\n", ft_recursive_power(2, 3));
// }

int	ft_recursive_power(int nb, int power)
{	
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
