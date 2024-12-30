/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:19 by ioztimur          #+#    #+#             */
/*   Updated: 2023/03/02 23:11:19 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_stack	*tmp;
	int		nbr;

	tmp = stack;
	nbr = stack->nbr;
	while (tmp != 0)
	{
		if (nbr > tmp->nbr)
			return (0);
		nbr = tmp->nbr;
		tmp = tmp->next;
	}
	return (1);
}

int	is_rev_sorted(t_stack *stack)
{
	t_stack	*tmp;
	int		nbr;

	tmp = stack;
	nbr = stack->nbr;
	while (tmp != 0)
	{
		if (nbr < tmp->nbr)
			return (0);
		nbr = tmp->nbr;
		tmp = tmp->prev;
	}
	return (1);
}

int	is_gen_sorted(t_stack *stack)
{
	t_stack	*min_node;
	int		max_nbr;

	min_node = locate_nbr(stack, min(stack));
	if (is_sorted(min_node) && min_node->index == 0)
		return (1);
	else if (min_node->index == 0)
		return (0);
	else if (is_rev_sorted(min_node) && min_node->next == 0)
		return (1);
	else if (min_node->next == 0)
		return (0);
	else if (!is_sorted(min_node->next) || !is_rev_sorted(min_node->prev))
		return (0);
	max_nbr = max(min_node);
	min_node = min_node->prev;
	while (min_node)
	{
		if (max_nbr > min_node->nbr)
			return (0);
		min_node = min_node->prev;
	}
	return (1);
}
