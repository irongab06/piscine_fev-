/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:12:42 by gacavali          #+#    #+#             */
/*   Updated: 2024/02/18 17:37:40 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{	
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{	
		j = 0;
		while (j < size -1)
		{	
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j +1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{	
	int	tab[] = {1, 9, 3, 4, 7, 2, 6};
	int size = 7;
	int i = 0;
	
	ft_sort_int_tab(tab, size);	
       	while (i < size) {
                printf("%d", tab[i]);
                i++;
	}
	printf("\n");
	return (0);
}*/	
