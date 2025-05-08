/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:47:37 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/04 17:09:38 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

/*int	main(void)
{
	int		result;

	result = ft_str_is_alpha("filipez24");
	printf("%d", result);
}*/

int	ft_str_is_alpha(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= 'a' && str[idx] <= 'z')
			&& !(str[idx] >= 'A' && str[idx] <= 'Z'))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
