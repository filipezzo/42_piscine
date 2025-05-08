/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 09:01:53 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/03 09:25:50 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	letter;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				letter = argv[i][j];
				j++;
				write(1, &letter, 1);
			}
			i++;
			write(1, "\n", 1);
		}
	}
}
