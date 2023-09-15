/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:28:12 by nmaquet           #+#    #+#             */
/*   Updated: 2023/09/15 11:56:20 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <sys/time.h>   // for gettimeofday()
# include <unistd.h>     // for sleep()
# include <stdlib.h>
# include <pthread.h>

typedef	struct s_info
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
	int	number_of_forks;
} t_info;

typedef struct s_philo
{
	struct s_info	*info;
	int				id;
	int				status;
	int				is_eating;
	int				last_meal;
	
} s_philo;

void	check_args(int argc, char **argv);
int	ft_only_digit(const char *str);
int	ft_atoi(const char *nptr);


#endif