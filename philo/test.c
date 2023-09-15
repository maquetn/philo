/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:59:59 by nmaquet           #+#    #+#             */
/*   Updated: 2023/09/12 13:32:13 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void* my_turn(void *arg)
{

	for(int i=1; i <= 8; i++)
	{
		sleep(1);
		printf("My Turn!%d/8\n", i);
	}
	return NULL;
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

	pthread_create(&newthread, NULL, my_turn, NULL);
	your_turn();
	//wait until first function is done
	pthread_join(newthread, NULL);
}