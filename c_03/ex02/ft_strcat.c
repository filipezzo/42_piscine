/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:30:03 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/01 19:56:09 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char		*ft_strcat(char *dest, char *src);

/*int	main(void)
{
	char first_str[20] = "filipe";
	char second_str[20] = "adora a monilette";
	char third_str[20] = "filipe";
	char quad_str[20] = "adora a monilette";

	strcat(first_str, second_str);
	ft_strcat(third_str, quad_str);
	printf("%s\n", first_str);
	printf("%s\n", third_str);
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
