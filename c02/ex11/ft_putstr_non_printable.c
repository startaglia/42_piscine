/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:45:05 by startagl          #+#    #+#             */
/*   Updated: 2022/10/25 09:57:11 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		r;
	char	ri[2];
	char	*sc;

	sc = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			r = str[i] / 16;
			ri[0] = sc[r];
			r = str[i] % 16;
			ri[1] = sc[r];
			write (1, "\\", 1);
			write (1, &ri[0], 1);
			write (1, &ri[1], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}	
}
