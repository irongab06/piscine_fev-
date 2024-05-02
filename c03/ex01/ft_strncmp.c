/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:53:24 by gacavali          #+#    #+#             */
/*   Updated: 2024/02/21 19:22:59 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && (s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
int main()


int	main(void)
{
	char	s1[] = "dalut";
	char	s2[] = "salut";
	int	i = ft_strncmp(s1, s2, 0);	

	ft_strncmp(s1, s2, 13);
	printf("%d", i);
	return(0);
}*/
