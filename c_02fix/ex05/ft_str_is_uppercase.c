/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:39:29 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/26 10:03:13 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

/*int	main(void)
{
	printf("%d", ft_str_is_uppercase("SOMENTE"));
	printf("%d", ft_str_is_uppercase("AQUInao"));
	printf("%d", ft_str_is_uppercase(""));
}*/

int	ft_str_is_uppercase(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= 'A' && str[idx] <= 'Z'))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
