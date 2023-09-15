#include <stdint.h>
#include "philo.h"

uint64_t	time_now(void)
{
	static struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * (uint64_t)1000) + (tv.tv_usec / 1000));
}

void	ft_sleep(uint64_t time)
{
	uint64_t	starting_time;

	starting_time = time_now();
	while (time_now() - starting_time < time)
		usleep(10);
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
		printf("%ld ms : Philo X is sleeping\n", timestamp);
		ft_sleep(1000); //change with function for whatever action it will be instead (sleep, eat, think)
		j++;
	}
}

int	main()
{
	get_timestamp();
}