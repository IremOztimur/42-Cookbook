/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:12:57 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:12:57 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*new_stack(long nbr)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = nbr;
	new->next = 0;
	new->prev = 0;
	return (new);
}

void	stack_add_back(t_stack **stack, t_stack *newarg)
{
	if (!stack || !newarg)
		return ;
	if (*stack == 0)
		*stack = newarg;
	else
	{
		newarg->prev = stack_last(*stack);
		(stack_last(*stack))->next = newarg;
	}
}

void	stack_add_front(t_stack **stack, t_stack *newarg)
{
	if (!!stack && !!newarg)
	{
		newarg->next = *stack;
		*stack = newarg;
	}
}

void	reindex(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack != 0)
	{
		stack->index = i;
		i++;
		stack = stack->next;
	}
}

int	find_lowest(t_stack *list)
{
	int	lowest;

	lowest = list->nbr;
	while (list)
	{
		if (list->nbr < lowest)
			lowest = list->nbr;
		list = list->next;
	}
	return (lowest);
}
