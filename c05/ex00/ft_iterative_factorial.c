/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:38:22 by gacavali          #+#    #+#             */
/*   Updated: 2024/02/26 19:25:48 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
int 	main(void)
{
	int	nb;
	int	result;

	nb = 0;
	result = ft_iterative_factorial(nb);
	printf("%i", result);
	return (0);
}*/
