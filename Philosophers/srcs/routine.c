/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:31:21 by ioztimur          #+#    #+#             */
/*   Updated: 2023/09/18 05:21:49 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	eating(t_philo *philo)
{
	long long	time;

	pthread_mutex_lock(philo->prev->fork);
	pthread_mutex_lock(philo->fork);
	time = time_present() - philo->data->start_time;
	print_in_format(philo, time_present() - \
	philo->data->start_time, "has taken a fork");
	print_in_format(philo, time_present() - \
	philo->data->start_time, "has taken a fork");
	print_in_format(philo, time_present() - \
	philo->data->start_time, "is eating");
	while (dying(philo) == ALIVE && philo->data->dead == ALIVE)
	{
		if (time_present() - philo->data->start_time - \
		time == philo->data->to_eat)
		{
			philo->last_meal = time_present() - philo->data->start_time;
			break ;
		}
		usleep(50);
	}
	pthread_mutex_unlock(philo->prev->fork);
	pthread_mutex_unlock(philo->fork);
}

void	sleeping(t_philo *philo)
{
	long long	time;

	print_in_format(philo, time_present() - \
	philo->data->start_time, "is sleeping");
	time = time_present() - philo->data->start_time;
	while (dying(philo) == ALIVE && philo->data->dead == ALIVE)
	{
		if (time_present() - philo->data->start_time - \
		time == philo->data->to_sleep)
			break ;
		usleep(50);
	}
}

void	thinking(t_philo *philo)
{
	print_in_format(philo, time_present() \
	- philo->data->start_time, "is thinking");
}

int	dying(t_philo *philo)
{
	static int	game_over = 1;

	pthread_mutex_lock(philo->data->print);
	if (philo->data->dead == ALIVE
		&& time_present() - philo->data->start_time \
		> philo->data->to_die + philo->last_meal)
	{
		if (game_over)
		{
			game_over = 0;
			printf("%lld %d died\n", time_present() \
			- philo->data->start_time, philo->philo_id);
		}
		philo->data->dead = DEAD;
		pthread_mutex_unlock(philo->data->print);
		return (DEAD);
	}
	pthread_mutex_unlock(philo->data->print);
	return (ALIVE);
}

void	print_in_format(t_philo *philo, long long time, char *str)
{
	pthread_mutex_lock(philo->data->print);
	if (philo->data->dead == ALIVE)
		printf("%lld %d %s\n", time, philo->philo_id, str);
	pthread_mutex_unlock(philo->data->print);
}
