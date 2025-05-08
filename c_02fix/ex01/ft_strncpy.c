/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:23:56 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/26 12:15:07 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/*int	main(void)
{
	char			*first_string;
	char			second_string[20];
	char 			third_string[20];
	unsigned int	n;

	n = 3;
	first_string = "escola42";
	ft_strncpy(second_string, first_string, n);
	strncpy(third_string, first_string, 3);
	printf("%s", second_string);
	printf("%s", third_string);
} */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
