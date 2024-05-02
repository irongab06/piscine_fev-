/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:05:20 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/06 18:06:42 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = NULL;
	i = 0;
	copy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (copy == NULL)
	{
		return (0);
	}
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs_to_tab;
	int			i;

	strs_to_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (strs_to_tab == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		strs_to_tab[i].size = ft_strlen(av[i]);
		strs_to_tab[i].str = av[i];
		strs_to_tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	strs_to_tab[i].str = 0;
	return (strs_to_tab);
}
/*
int	main(int argc, char **argv)
{
	t_stock_str *par;
	
	int	i;

	i = 0;
	par = ft_strs_to_tab(argc, argv);
	while (par[i].str)
	{
		printf("str : %s\ncpy : %s\nsize: %d\n\n",
par[i].str, par[i].copy, par[i].size);			
		free(par[i].copy);	
		i++;
	}
	free(par);
	return (0);
}*/
