/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 07:43:42 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/05 12:20:40 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		ft_atoi(char *str);

int	main(void)
{	
	char *str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
} 

int	ft_atoi(char *str)
{	
	int		signal;
	int		result;

	signal = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			signal *= -1;
		}
		str++;
		return 0;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * signal);
}
