/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:12:09 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/01 19:52:57 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int	main(void)
{	
	int result;
	int my_result;
    char first_string[] = "escolAX42";
	char second_string[] = "escolax42";
	result = ft_strcmp(first_string, second_string);
	my_result = strcmp(first_string, second_string);
	printf("%d\n", result);
	printf("%d\n", my_result);
} 

int	ft_strcmp(char *s1, char *s2)
{
	int		idx;

	idx = 0;
	while (s1[idx] != '\0' && s2[idx] && s1[idx] == s2[idx])
	{
		idx++;
	}
	
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
