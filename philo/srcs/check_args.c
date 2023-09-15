/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:28:41 by nmaquet           #+#    #+#             */
/*   Updated: 2023/09/15 11:30:46 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	check_args(int argc, char **argv)
{
	int	i;
	
	i = 1;
	if (argc == 5 || argc == 6)
	{
		while (argv[i] && ft_only_digit(argv[i]))
		{
			if (ft_atoi(argv[i]) < 0)
				printf("invalid argument");
			printf("%s\n", argv[i]);
			i++;
		}
		if (i != argc)
			printf("error");
	}
}