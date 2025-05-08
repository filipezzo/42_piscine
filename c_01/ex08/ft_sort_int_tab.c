/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsousa <fsousa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:28:14 by fsousa            #+#    #+#             */
/*   Updated: 2025/05/01 14:53:28 by fsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int arr[] = {4,8,90, 5, 20, 100, 34, 67};
	int *ptr;

	ptr = &arr[0];
	ft_sort_int_tab(ptr, 8);
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	printf("%d\n", arr[5]);
	printf("%d\n", arr[6]);
	printf("%d\n", arr[7]);

} 

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{	
		j = 1;
		while (j < size - 1 - i)
		{	
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
