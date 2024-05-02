/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:07:38 by gacavali          #+#    #+#             */
/*   Updated: 2024/02/26 19:54:10 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 0;
	power = 0;
	result = ft_recursive_power(nb, power);
	printf("%i", result);
	return (0);
}*/
