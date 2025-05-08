/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:43:36 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/25 19:54:40 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str);
/* int main(void)
{
	printf("%d", ft_str_is_printable("euai3455^^*"));
	printf("%d", ft_str_is_printable("\t\b"));
	printf("%d", ft_str_is_printable(""));
} */

int	ft_str_is_printable(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] <= 31))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
