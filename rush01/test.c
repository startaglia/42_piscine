/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:49:26 by startagl          #+#    #+#             */
/*   Updated: 2022/10/23 16:53:08 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* programma per stampare gli argomenti dalla linea di comando */
        #include <stdio.h>
	int 	main(int argc, char **argv) { 
	 int i;
	 printf("argc=%d\n",argc);
	 for(i=0;i < argc;++i)
	   printf("argv[%d]:=%s\n",i,argv[i]);
	 }

  /*Se si compila chiamandolo "eco" e lo si edegue scrivendo:

 	eco f1 "f2 con spazio" f3 4 stop!

  l'output sara':

  	argc=6

	argv[0]=eco
	argv[1]=f1
	argv[2]=f2 con spazio
	argv[3]=f3
	argv[4]=4
	argv[5]=stop!
	
  Va notato che:*/

