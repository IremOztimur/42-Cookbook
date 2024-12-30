/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:12:56 by ioztimur          #+#    #+#             */
/*   Updated: 2023/03/02 23:12:56 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	max(t_stack *x)
{
	t_stack	*tmp;
	int		nbr;

	nbr = x->nbr;
	tmp = x;
	while (tmp)
	{
		if (nbr < tmp->nbr)
			nbr = tmp->nbr;
		tmp = tmp->next;
	}
	return (nbr);
}

int	min(t_stack *x)
{
	t_stack	*tmp;
	int		nbr;

	nbr = x->nbr;
	tmp = x;
	while (tmp)
	{
		if (nbr > tmp->nbr)
			nbr = tmp->nbr;
		tmp = tmp->next;
	}
	return (nbr);
}
