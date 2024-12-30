/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:12 by agaygisi          #+#    #+#             */
/*   Updated: 2023/05/25 15:07:15 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_int(long a)
{
	if (a > 2147483647)
		return (1);
	if (a < -2147483648)
		return (1);
	return (0);
}

void	ft_is_stack_int(t_stack *a)
{
	while (a)
	{
		if (ft_is_int(a->nbr))
			ft_exit();
		a = a->next;
	}
}

void	ft_check_dup(t_stack *a, int i, int j)
{
	int	z;
	int	*check_array;

	check_array = malloc(i * sizeof(int));
	while (a != NULL)
	{
		check_array[j++] = a->nbr;
		a = a->next;
	}
	z = -1;
	while (++z < i)
	{
		j = z + 1;
		while (j < i)
		{
			if (check_array[j] == check_array[z])
				ft_exit();
			j++;
		}
	}
	free(check_array);
}

int	ft_check_sep(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] == 43 || s[i] == 45) && !(ft_isdigit(s[i + 1])))
			ft_exit();
		if (!(ft_isdigit(s[i]))
			&& s[i] != 32 && s[i] != '+' && s[i] != '-')
			ft_exit();
		i++;
	}
	return (32);
}

void	ft_check_errors(t_stack *a)
{
	ft_is_stack_int(a);
	ft_check_dup(a, stack_len(a), 0);
}
