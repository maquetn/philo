/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:16:31 by nmaquet           #+#    #+#             */
/*   Updated: 2023/09/15 11:25:15 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	init_info(t_info *info, int argc, char **argv)
{
	t_info->number_of_philosophers = argv[1];
	t_info->time_to_die = argv[2];
	t_info->time_to_eat = argv[3];
	t_info->time_to_sleep = argv[4];
	if (argc == 6)
		t_info->number_of_times_each_philosopher_must_eat = argv[5];
	t_info->number_of_forks = t_info->number_of_philosophers;
}