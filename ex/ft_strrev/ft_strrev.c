/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:23:34 by startagl          #+#    #+#             */
/*   Updated: 2022/11/01 16:09:28 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
char    *ft_strrev(char *str)
{
	int	i;
	int	j;
	char temp[0];

	i = 0;

	while (str[i])
	{
		i++;
	}
	j = (i - 1);
	i = 0;
	while(j > i)
	{
			temp[0] = str[i];
			str[i] = str[j];
			str[j] = temp[0];	
			i++;
			j--;
	}
	return (str);
}

int main ()
{
	char str[] = "ciao";

	printf("%s", ft_strrev(str));
	return (0);
}
