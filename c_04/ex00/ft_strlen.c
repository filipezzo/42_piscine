/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:12:53 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/29 08:54:14 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

/*int	main(void)
{
	char	string[] = "42sp";
	printf("%d", ft_strlen(string));
} */

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	idx++;
	return (idx);
}
