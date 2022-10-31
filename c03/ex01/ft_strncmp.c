/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:46:16 by startagl          #+#    #+#             */
/*   Updated: 2022/10/30 09:38:39 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
	i++;
	}
	return (0);
}
/*
int main (void)
{
	char s1[] = "RFFffssasd";
	char s2[] = "fgffgdash";
	//int x;

	//printf("%d", ft_strncmp(s1, s2, 3));
	//x=strncmp(s1, s2 , 3);
	printf("%d", ft_strncmp(s1, s2, 3));
}*/
