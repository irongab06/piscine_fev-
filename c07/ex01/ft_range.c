/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:41:47 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/04 08:18:58 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	result = malloc(sizeof(int) * size + 1);
	if (result == NULL)
		return (0);
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{	
	int	min = 0;
	int	max = 500;
	int	*tab = ft_range(min, max);
	int	i;
	
	i = 0;
	while (min + i < max)
	{
		printf("%d", tab[i]);
		printf("%c", ' ');
		i++;
	}
	return (0);
}*/
