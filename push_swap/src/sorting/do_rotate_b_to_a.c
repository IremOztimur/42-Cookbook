/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rotate_b_to_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:41 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:11:41 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	do_rarb_b_to_a(t_root *root, int index)
{
	int	a;
	int	rr_count;
	int	ra_or_rb;

	a = ft_find_index_in_a(root->a, locate_index(root->b, index)->nbr);
	ra_or_rb = 1;
	rr_count = a;
	if (index < rr_count)
	{
		rr_count = index;
		ra_or_rb = 2;
	}
	while (rr_count--)
		rr(root);
	while (ra_or_rb == 1 && index-- - a > 0)
		rb(root);
	while (ra_or_rb == 2 && a-- - index > 0)
		ra(root);
	pa(root);
	return (-1);
}

int	do_rarrb_b_to_a(t_root *root, int index)
{
	int	a;

	a = ft_find_index_in_a(root->a, locate_index(root->b, index)->nbr);
	index = stack_len(root->b) - index;
	while (a--)
		ra(root);
	while (index--)
		rrb(root);
	pa(root);
	return (-1);
}

int	do_rrarb_b_to_a(t_root *root, int index)
{
	int	a;

	a = stack_len(root->a) - ft_find_index_in_a(root->a, locate_index(root->b,
				index)->nbr);
	while (a--)
		rra(root);
	while (index--)
		rb(root);
	pa(root);
	return (-1);
}

int	do_rrarrb_b_to_a(t_root *root, int index)
{
	int	a;
	int	rrr_count;
	int	rra_or_rrb;

	a = stack_len(root->a) - ft_find_index_in_a(root->a, locate_index(root->b,
				index)->nbr);
	index = stack_len(root->b) - index;
	rra_or_rrb = 1;
	rrr_count = a;
	if (index < rrr_count)
		rrr_count = index;
	if (index == rrr_count)
		rra_or_rrb = 2;
	while (rrr_count--)
		rrr(root);
	while (rra_or_rrb == 1 && index-- - a > 0)
		rrb(root);
	while (rra_or_rrb == 2 && a-- - index > 0)
		rra(root);
	pa(root);
	return (-1);
}
