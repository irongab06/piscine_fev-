/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:35:13 by gacavali          #+#    #+#             */
/*   Updated: 2024/02/20 19:23:33 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2 [i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "marvel Ironman";
	char	s2[] = "marvel ironman";

	int	i = ft_strcmp(s1, s2);
	printf("%d", i);
	return (0);
}*/
