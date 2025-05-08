/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 09:40:55 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/27 14:30:45 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char		*ft_strstr(char *str, char *to_find);

/*int	main(void)
{
	printf("resultado da lib %s\n", strstr("escola42", ""));
	printf("resultado da lib %s\n", strstr("escola42", "xd"));
	printf("resultado da lib %s\n", strstr("escola42", "ola"));
	printf("resultado da fn %s\n", ft_strstr("escola42", ""));
	printf("resultado da fn %s\n", ft_strstr("escola42", "xd"));
	printf("resultado da fn %s\n", ft_strstr("escola42", "ola"));
} */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
