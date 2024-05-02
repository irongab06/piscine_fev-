/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:54:54 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/04 08:25:17 by gacavali         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ultimate_range;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ultimate_range = max - min;
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (ultimate_range);
}
/*
#include <stdio.h>

int	main(void)
{	
	int	*tab;
	int	min;
	int	max;
	int	result;
	
	min = 10;
	max = 50;

	
	result = ft_ultimate_range(&tab ,min ,max);
	printf("%i", result);
	return (0);
}*/
