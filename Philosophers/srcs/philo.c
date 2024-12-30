/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:17:44 by ioztimur          #+#    #+#             */
/*   Updated: 2023/09/18 06:52:43 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	*ft_philo(void *philo_ptr)
{
	t_philo	*philo;

	philo = (t_philo *)philo_ptr;
	while (philo->data->dead == ALIVE)
	{
		eating(philo);
		philo->has_eaten++;
		if (philo->has_eaten == philo->data->must_eat)
			philo->data->philos_ate_enough++;
		if (philo->data->dead == DEAD
			|| philo->data->philos_ate_enough == philo->data->philos)
			break ;
		sleeping(philo);
		if (philo->data->dead == DEAD
			|| philo->data->philos_ate_enough == philo->data->philos)
			break ;
		thinking(philo);
		if (philo->data->dead == DEAD
			|| philo->data->philos_ate_enough == philo->data->philos)
			break ;
	}
	return (NULL);
}

void	*ft_one_philo(void *philo_ptr)
{
	t_philo		*philo;
	long long	time;

	philo = (t_philo *)philo_ptr;
	pthread_mutex_lock(philo->fork);
	print_in_format(philo, time_present() - \
	philo->data->start_time, "has taken a fork");
	time = time_present() - philo->data->start_time;
	while (dying(philo) == ALIVE && philo->data->dead == ALIVE)
	{
		if (time_present() - philo->data->start_time \
		- time == philo->data->to_die)
		{
			pthread_mutex_unlock(philo->fork);
			print_in_format(philo, time_present() \
			- philo->data->start_time, "died");
			break ;
		}
	}
	return (NULL);
}
