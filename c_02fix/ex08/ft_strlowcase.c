/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:15:55 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/25 20:25:35 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char		*ft_strlowcase(char *str);

/* int	main(void)
{
	char name[] = "ESCOLA42";
	char other_name[] = "CORINTHiANS123!!";

	ft_strlowcase(name);
	ft_strlowcase(other_name);

	printf("%s\n", name);
	printf("%s\n", other_name);
} */

char	*ft_strlowcase(char *str)
{
	int		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
		str[idx] += 32;
		idx++;
	}
	return (str);
}
