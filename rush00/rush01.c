/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 12:18:02 by natde-li          #+#    #+#             */
/*   Updated: 2025/04/20 16:47:12 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	draw_logic(int column, int row, int x, int y);

void	rush(int x, int y)
{
	int	row;
	int	column;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			draw_logic(column, row, x, y);
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}

void	draw_logic(int column, int row, int x, int y)
{
	if ((column > 1 && column == x) && y == 1)
		ft_putchar('\\');
	else if (x == 1 && (y > 1 && row == y))
		ft_putchar('\\');
	else if ((column == 1 && row == 1) || (column == x && row == y) || (x == 1
			&& y == 1))
		ft_putchar('/');
	else if ((column == x && row == 1) || (column == 1 && row == y))
		ft_putchar('\\');
	else if ((column > 1 && row == 1) || (row == y) || (column == 1 && row > 1)
		|| (column == x && row > 1))
		ft_putchar('*');
	else
		ft_putchar(' ');
}
