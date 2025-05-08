/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 08:46:46 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/03 17:30:18 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;

	if (argc == 1)
	{
		program_name = argv[0];
		while (*program_name)
		{
			write(1, program_name, 1);
			program_name++;
		}
		write(1, "\n", 1);
	}
}
