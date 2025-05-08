/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 09:34:11 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/03 14:45:49 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	letter;

	if (argc > 1)
	{
		i = argc - 1;
		while (argv[i] && i != 0)
		{
			j = 0;
			while (argv[i][j])
			{
				letter = argv[i][j];
				j++;
				write(1, &letter, 1);
			}
			write(1, "\n", 1);
			i--;
		}
	}
}
