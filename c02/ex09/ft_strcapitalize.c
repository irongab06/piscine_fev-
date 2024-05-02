/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:10:57 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/05 19:10:42 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	inter;

	inter = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (inter == 1)
			{
				str[i] -= 32;
				inter = 0;
				i++;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			inter = 0;
		else
			inter = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 
				42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
