/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:55:53 by gacavali          #+#    #+#             */
/*   Updated: 2024/03/06 08:28:49 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin_2(int size, int lenchar, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		lendest;

	dest = malloc(sizeof(char) * (lenchar + 1));
	if (dest == NULL)
		return (0);
	dest[0] = '\0';
	lendest = 0;
	i = 0;
	while (lendest < size)
	{
		dest = ft_strcat(dest, strs[i]);
		if (lendest < size -1)
			dest = ft_strcat(dest, sep);
		i++;
		lendest++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		lenchar;
	int		i;

	if (size == 0)
	{
		dest = malloc(sizeof(char) * 1);
		dest[0] = '\0';
		return (dest);
	}
	lenchar = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		lenchar = lenchar + ft_strlen(strs[i]);
		i++;
	}
	dest = ft_strjoin_2 (size, lenchar, strs, sep);
	return (dest);
}
/*
#include <stdio.h>
int     main(void)
{    
    char    str[] = "hea ";
    char    str1[] = "woux";
    char    str2[] = "niu";
    char    *str012[] = {str, str1, str2};
    char    *result = ft_strjoin(3, str012, " ");

    printf("%s", result);
    return (0);
}*/
