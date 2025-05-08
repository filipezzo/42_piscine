/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:18:41 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/01 14:28:20 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

/*int	main(void)
{
	int arr[5] = {2,10,1,5,7};
	int	*ptr = &arr[0];
	ft_rev_int_tab(ptr, 5);
	printf("%d ", arr[0]);
	printf("%d ", arr[1]);
	printf("%d ", arr[2]);
	printf("%d ", arr[3]);
	printf("%d ", arr[4]);
} */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size -1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
