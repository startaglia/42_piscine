/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testargc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:02:06 by startagl          #+#    #+#             */
/*   Updated: 2022/10/23 18:30:18 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
void putchar (char c)

{
		write (1, &c, 1);
}
*/
int  checkNumber (char num) {
	if (num >='0' && num <='9')
		return 1;
	else 
		return 0;
}

char	sumNumber(char a, char b){
	a -= 48;
	b -= 48;
	char sum;
	sum = a + b + 48;
	return (sum); 
}

int	main (int argc, char **argv)
{
	int i;
	int j;
	j=0;
	i =0;
	while (i < argc){
		while (argv[i][j])
		{
			if (checkNumber(argv[i][j]) == 1)
			{
				//printf("%d", sumNumber(argv[i][j], argv[i+1][j]));
				//write(1, sumNumber(argv[i][j], argv[i+1][j]), 1);
				putchar(sumNumber(argv[i][j], argv[i+1][j]));
				i++;
			}
			else 
			{
				putchar (argv[i][j]);
			}
			j++;	
		}
		j=0;
		i++;
	}
	return (0);
}
