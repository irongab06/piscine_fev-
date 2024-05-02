/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:29:57 by gacavali          #+#    #+#             */
/*   Updated: 2024/02/26 19:31:19 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = nb;
	i = power - 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result = result * nb;
		i--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 0;
	printf("%i", ft_iterative_power(nb, power));
	return (0);
}*/
