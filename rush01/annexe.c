/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annexe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:59:16 by startagl          #+#    #+#             */
/*   Updated: 2022/10/22 10:11:31 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int main () {
	int *a, i, n; 
	float media;
	
	a=(int *) malloc(sizeof(int));
	
	printf("Quanti valori?" );
	scanf("%d", &n);

	for(i=0;i<n; i++)  {    
		printf("Elemento %d: ", i+1);   
		scanf("%d",  &a[i] ) ;   
 	} 

 	media=0; 
 	for(i=0;i<n;i++)    
 		media+=a[i];
 	
 	media/=n;
 	printf("La  media e':  %.2f" ,  media ); 
 		
 	return 0; 
} 
