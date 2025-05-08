/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 09:10:13 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/26 12:13:50 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

/*int	main(void)
{
	char string[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(string);
	printf("%s", string);
} */

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	new_word;

	idx = 0;
	new_word = 1;
	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'a' && str[idx] <= 'z')
			|| (str[idx] >= 'A' && str[idx] <= 'Z')
			|| (str[idx] >= '0' && str[idx] <= '9'))
		{
			if (new_word && (str[idx] >= 'a' && str[idx] <= 'z'))
				str[idx] -= 32;
			else if (!new_word && (str[idx] >= 'A' && str[idx] <= 'Z'))
				str[idx] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		idx++;
	}
	return (str);
}
