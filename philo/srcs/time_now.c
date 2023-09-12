/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_now.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:59:57 by nomaq             #+#    #+#             */
/*   Updated: 2023/09/12 11:33:36 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long int	time_now(void)
{
	struct timeval	now;
	int				i;

	i = 0;
	gettimeofday(&now, NULL);
	return ((now.tv_sec * 1000) + (now.tv_usec / 1000));
}

void	get_timestamp(void)
{
	long int		timestamp;
	long int		starting_time;
	struct timeval	now;
	int				i;
	int				j;

	i = 0;
	j = 0;
	if (i == 0)
		starting_time = time_now();
		i++;
	while (j < 5)
	{
		timestamp = time_now() - starting_time;
		usleep(1000000); //change with function for whatever action it will be instead (sleep, eat, think)
		printf("%ld ms : Philo X is sleeping\n", timestamp);
		j++;
	}
}

int	main()
{
	get_timestamp();
}
