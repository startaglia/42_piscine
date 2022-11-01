/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:40:16 by startagl          #+#    #+#             */
/*   Updated: 2022/11/01 15:04:55 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0'; 
	write(1, "\n", 1);
	return (s1);
}
/*
#include<stdio.h>
int main()
{
   	char test1[] = "ggggggggg";
	char test2[] = "bella";

	char *c;

	c = ft_strcpy(test1, test2);

	printf("%s", c);
}*/
