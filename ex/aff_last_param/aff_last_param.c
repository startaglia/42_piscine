/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:19:42 by startagl          #+#    #+#             */
/*   Updated: 2022/11/01 14:38:33 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	if (ac >= 2)
	{
		int	i;
		int	j;
	
		j = 0;
		i = ac - 1;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
	
	}	
	write(1, "\n", 1);
	return (0);
}
