/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:54:23 by nmaquet           #+#    #+#             */
/*   Updated: 2023/09/11 13:31:48 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	get_timestamp(long timestam, struct timeval start, struct timeval end)
{
	long	seconds;
	long	micros;
	long	time_elapsed;

	seconds = (end.tv_sec - start.tv_sec);
	micros = ((seconds * 1000000) + end.tv_usec) - (start.tv_usec);
	time_elapsed = micros / 1000;
	timestamp += time_elapsed;
	return (timestamp);
}

// main function to find the execution time of a C program
int	main(void)
{
	struct timeval	start;
	struct timeval	end;
	long			timestamp;

	timestamp = 0;
	gettimeofday(&start, NULL);
	usleep(1000000);
	gettimeofday(&end, NULL);
	timestamp = get_timestamp(timestamp, start, end);
	printf("Timestamp : %ld ms\n", timestamp);
	gettimeofday(&start, NULL);
	usleep(1000000);
	gettimeofday(&end, NULL);
	timestamp = get_timestamp(timestamp, start, end);
	printf("Timestamp : %ld ms\n", timestamp);
	return (0);
}
