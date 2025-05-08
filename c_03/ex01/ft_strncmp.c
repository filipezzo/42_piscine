/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:31:36 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/28 13:22:55 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n);

/*int	main(void)
{
	char	*first_str = "filipExxxx";
	char	*second_str = "filipexxxx";
	int	x = 6;
	int	result;
	int my_result;

	result = strncmp(first_str, second_str, x);
	my_result = ft_strncmp(first_str, second_str, x);
	printf("%d\n", result);
	printf("%d\n", my_result);
} */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (s1[idx] && s2[idx]
		&& idx < n && s1[idx] == s2[idx])
	idx++;
	if (idx == n)
		return (0);
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
