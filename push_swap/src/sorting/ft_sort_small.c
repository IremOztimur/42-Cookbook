/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:18 by agaygisi          #+#    #+#             */
/*   Updated: 2023/05/25 12:00:09 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_root *root)
{
	if (!(is_sorted(root->a)))
	{
		if (min(root->a) == root->a->nbr)
		{
			rra(root);
			sa(root);
		}
		else if (max(root->a) == root->a->nbr)
		{
			ra(root);
			if (!is_sorted(root->a))
				sa(root);
		}
		else
		{
			if (root->a->next->nbr < root->a->nbr)
				sa(root);
			else
				rra(root);
		}
	}
}

void	ft_sort_small(t_root *root)
{
	int	i;

	while (stack_len(root->a) > 3)
	{
		i = locate_nbr(root->a, min(root->a))->index;
		while (i > stack_len(root->a) / 2 && min(root->a) != root->a->nbr)
			rra(root);
		while (i < stack_len(root->a) / 2 && min(root->a) != root->a->nbr)
			ra(root);
		if (min(root->a) != root->a->nbr && i == stack_len(root->a) / 2)
		{
			while (min(root->a) != root->a->nbr)
				ra(root);
		}
		pb(root);
	}
	ft_sort_three(root);
	while (root->b)
		pa(root);
}
