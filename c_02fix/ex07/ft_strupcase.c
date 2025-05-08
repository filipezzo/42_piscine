/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:56:34 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/25 20:17:28 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char		*ft_strupcase(char *str);

/*int	main(void)
{
	char	str1[] = "filipe123abcXYZ";
	char	str2[] = "42School";
	char	str3[] = "$@&@*$@()";

	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
} */

char	*ft_strupcase(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{	
		if (str[idx] >= 'a' && str[idx] <= 'z')
		str[idx] -= 32;
		idx++;
	}
	return (str);
}
