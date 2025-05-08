/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:17:52 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/26 20:26:27 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char		*ft_strncat(char *dest, char *src, unsigned int nb);

/*int	main(void)
{
	char first_str[20] = "filipe";
	char second_str[20] = "adora a monilette";
	char third_str[20] = "filipe";
	char quad_str[20] = "adora a monilette";

	strncat(first_str, second_str,7);
	ft_strncat(third_str, quad_str,7);
	printf("%s\n", first_str);
	printf("%s\n", third_str);
} */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
