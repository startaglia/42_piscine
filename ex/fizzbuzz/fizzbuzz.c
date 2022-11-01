/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:09:37 by startagl          #+#    #+#             */
/*   Updated: 2022/11/01 14:10:56 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	number;
	int f;

	f = 0;
	number = 1;
	while (number < 100)
	{
		if (number % 3 == 0 && number % 5 == 0){
			write(1, "fizzbuzz", 8);
			f = 1;
		}
		else if (number % 3 == 0)
		{
			write(1, "fizz", 4);
			f = 1;
		}
		else if (number % 5 == 0)
		{
			write(1, "buzz", 4);
			f = 1;
		}
		else if (number > 9 && f == 0){
			ft_putchar(number / 10 + '0');
			ft_putchar(number % 10 + '0');
		}
		else if (f == 0 && number < 9)
			ft_putchar( number + '0');
		f = 0;
		write(1, "\n", 1);
		number++;
	}
}
