/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:59:59 by nmaquet           #+#    #+#             */
/*   Updated: 2023/09/14 12:15:00 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void* my_turn(void *arg)
{
	int *iptr = (int *)malloc(sizeof(int));
	*iptr = 5;
	for(int i=1; i <= 8; i++)
	{
		sleep(1);
		printf("My Turn! %d/8--%d--\n", i, *iptr);
		(*iptr)++;
	}
	return iptr;
}

void your_turn()
{
	for(int i=1; i <= 5; i++)
	{
		sleep(2);
		printf("Your Turn!%d/5\n", i);
	}
}

int main()
{
	pthread_t	newthread;
	int *result;

	pthread_create(&newthread, NULL, my_turn, NULL);
	your_turn();
	//wait until first function is done
	pthread_join(newthread, (void *)&result); //returns whatever it is pointing
	printf("thread is done: *result = %d\n", *result);
	free(result);
}