/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 02:15:49 by ioztimur          #+#    #+#             */
/*   Updated: 2023/09/18 06:48:15 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include <time.h>

# define TYPEERROR "Wrong number of arguments"
# define TYPEERROR2 "Wrong type of arguments"
# define EXIT_FAILURE 1
# define EXIT_SUCCESS 0
# define ALIVE 1
# define DEAD 0

typedef struct s_data
{
	long long		philos;
	long long		to_die;
	long long		to_eat;
	long long		to_sleep;
	long long		must_eat;
	long long		philos_ate_enough;
	long long		start_time;
	int				dead;
	pthread_mutex_t	*print;
}	t_data;

typedef struct s_philo
{
	t_data			*data;
	pthread_t		id;
	int				philo_id;
	pthread_mutex_t	*fork;
	long long		last_meal;
	long long		has_eaten;
	struct s_philo	*next;
	struct s_philo	*prev;

}	t_philo;

typedef struct s_philo_ring {
	t_philo	*head;
	int		size;
}	t_philo_ring;

void		ft_check_errors(int ac, char **av);
void		ft_get_data(t_data *data, int ac, char **av);
void		ft_initialize_ring(t_philo_ring *ring);
t_philo		*ft_create_philo(t_data *data);
void		ft_add_philo(t_philo_ring *ring, t_philo *new_philo);
void		eating(t_philo *philo);
void		sleeping(t_philo *philo);
void		thinking(t_philo *philo);
int			dying(t_philo *philo);
void		print_in_format(t_philo *philo, long long time, char *str);
long long	time_present(void);
void		is_any_dead(t_philo *philo);
void		*ft_philo(void *philo_ptr);
void		*ft_one_philo(void *philo_ptr);
int			ft_isdigit(int c);
int			ft_atoi(const char *s);
void		ft_reset(t_philo_ring *ring, int *i);
void		initialize(int ac, char **av, t_data *data, t_philo_ring *ring);

#endif
