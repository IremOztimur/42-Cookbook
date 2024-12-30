/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:30:28 by ioztimur          #+#    #+#             */
/*   Updated: 2023/09/18 04:32:46 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	ft_error(int err)
{
	if (err)
	{
		printf("Error: pthread_create() failed\n");
		exit(EXIT_FAILURE);
	}
}

void	ft_one_philo_starter(t_philo_ring *ring, int *i)
{
	int	error;

	if (ring->size == 1)
	{
		error = pthread_create(&ring->head->id, NULL, ft_one_philo, ring->head);
		ft_error(error);
		(*i)++;
	}
}

int	main(int ac, char **av)
{
	int				i;
	t_data			data;
	t_philo_ring	ring;
	int				error;

	i = 0;
	initialize(ac, av, &data, &ring);
	while (i++ < data.philos)
		ft_add_philo(&ring, ft_create_philo(&data));
	ft_reset(&ring, &i);
	data.start_time = time_present();
	ft_one_philo_starter(&ring, &i);
	while (i++ < ring.size)
	{
		error = pthread_create(&ring.head->id, NULL, ft_philo, ring.head);
		ft_error(error);
		ring.head = ring.head->next;
	}
	ft_reset(&ring, &i);
	while (i++ < ring.size)
	{
		pthread_join(ring.head->id, NULL);
		ring.head = ring.head->next;
	}
	return (0);
}
