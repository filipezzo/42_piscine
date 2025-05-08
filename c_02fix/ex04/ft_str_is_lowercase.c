/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:54:56 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/25 19:03:00 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_lowercase(char *str);

/* int	main(void)
{
	printf("%d", ft_str_is_lowercase("abv"));
	printf("%d", ft_str_is_lowercase("abvDE"));
	printf("%d", ft_str_is_lowercase(""));
} */

int	ft_str_is_lowercase(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= 'a' && str[idx] <= 'z'))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
