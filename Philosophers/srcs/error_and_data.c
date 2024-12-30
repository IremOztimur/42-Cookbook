/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_and_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:28:12 by ioztimur          #+#    #+#             */
/*   Updated: 2023/09/18 07:23:26 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_check_errors(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac != 5 && ac != 6)
	{
		printf("%s", TYPEERROR);
		exit(EXIT_FAILURE);
	}
	while (av[i])
	{
		j = 0;
		while (ft_isdigit(av[i][j]))
			j++;
		if (av[i++][j])
		{
			printf("%s", TYPEERROR2);
			exit(EXIT_FAILURE);
		}
	}
}

void	ft_get_data(t_data *data, int ac, char **av)
{
	data->philos = ft_atoi(av[1]);
	data->to_die = ft_atoi(av[2]);
	data->to_eat = ft_atoi(av[3]);
	data->to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data->must_eat = ft_atoi(av[5]);
	else
		data->must_eat = -1;
	if (data->philos <= 0)
		exit(EXIT_FAILURE);
	data->dead = ALIVE;
	data->print = malloc(sizeof(pthread_mutex_t));
	data->philos_ate_enough = 0;
	pthread_mutex_init(data->print, NULL);
}
