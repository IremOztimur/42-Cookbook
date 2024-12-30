/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotate_a_to_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:32 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:11:32 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	do_rarb_a_to_b(t_root *root, int index)
{
	int	b;
	int	rr_count;
	int	ra_or_rb;

	b = ft_find_index_in_b(root->b, locate_index(root->a, index)->nbr);
	ra_or_rb = 1;
	rr_count = b;
	if (index < rr_count)
		rr_count = index;
	if (rr_count == index)
		ra_or_rb = 2;
	while (rr_count--)
		rr(root);
	while (ra_or_rb == 1 && index - b > 0)
	{
		ra(root);
		index--;
	}
	while (ra_or_rb == 2 && b - index > 0)
	{
		rb(root);
		b--;
	}
	pb(root);
	return (-1);
}

int	do_rarrb_a_to_b(t_root *root, int index)
{
	int	b;

	b = stack_len(root->b) - ft_find_index_in_b(root->b, locate_index(root->a,
				index)->nbr);
	while (index--)
		ra(root);
	while (b--)
		rrb(root);
	pb(root);
	return (-1);
}

int	do_rrarb_a_to_b(t_root *root, int index)
{
	int	b;

	b = ft_find_index_in_b(root->b, locate_index(root->a, index)->nbr);
	index = stack_len(root->a) - index;
	while (index--)
		rra(root);
	while (b--)
		rb(root);
	pb(root);
	return (-1);
}

int	do_rrarrb_a_to_b(t_root *root, int index)
{
	int	b;
	int	rrr_count;
	int	rra_or_rrb;

	b = stack_len(root->b) - ft_find_index_in_b(root->b, locate_index(root->a,
				index)->nbr);
	index = stack_len(root->a) - index;
	rra_or_rrb = 1;
	rrr_count = b;
	if (index < rrr_count)
		rrr_count = index;
	if (index == rrr_count)
		rra_or_rrb = 2;
	while (rrr_count--)
		rrr(root);
	while (rra_or_rrb == 1 && index-- - b > 0)
		rra(root);
	while (rra_or_rrb == 2 && b-- - index > 0)
		rrb(root);
	pb(root);
	return (-1);
}
