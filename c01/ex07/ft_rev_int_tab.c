/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 12:04:55 by gacavali          #+#    #+#             */
/*   Updated: 2024/02/18 17:47:27 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{	
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{	
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = 9;

	ft_rev_int_tab(tab, size);
	int i = 0;
	while (i < size) {
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/	
