/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:34:59 by fsousa            #+#    #+#             */
/*   Updated: 2025/04/25 18:52:30 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str);

/*int	main(void)
{
	
	printf("%d\n", ft_str_is_numeric("12345")); 
	printf("%d\n", ft_str_is_numeric(""));   
	printf("%d\n", ft_str_is_numeric("123a45"));

} */

int	ft_str_is_numeric(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= '0' && str[idx] <= '9'))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
