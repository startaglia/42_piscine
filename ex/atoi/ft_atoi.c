/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:24:18 by startagl          #+#    #+#             */
/*   Updated: 2022/11/01 18:41:11 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int sign;

	result = 0;
	sign = 0;
	i = 0;
	while (str[i])
	{
		if(str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += str[i] - '0';
		}
		else if(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		else if(str[i] == 43 || str[i] == 45)
		{
			if ((!(str[i+1] >= 48 && str[i+1] <= 57)))
			return(0);
	
			else if(str[i] == 43 && (str[i+1] >= 48 && str[i+1] <= 57))
			{
				sign = +1;
			//	write(1, &str[i++], 1);
			}
			else if(str[i] == 45 && (str[i+1] >= 48 && str[i+1] <= 57))
			{
				sign = -1;
				//write(1, &str[i],1);
			}
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result * sign);
}
/*
		result *= 10;
		result += str[i] - '0';
		i++;
*/

int main ()
{
	char str[] = "+9998";
	ft_atoi(str);
	printf("%d", ft_atoi(str));
	return(0);
}
