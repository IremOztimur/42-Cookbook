/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:48 by ioztimur          #+#    #+#             */
/*   Updated: 2023/05/25 16:16:26 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push_a_to_b(t_root *root)
{
	int		i;
	t_stack	*tmp;

	tmp = root->a;
	while (root->a)
	{
		i = ft_rotate_type_a_to_b(root);
		while (i >= 0)
		{
			if (i == rarb_a_to_b(root, tmp->nbr))
				i = do_rarb_a_to_b(root, tmp->index);
			else if (i == rarrb_a_to_b(root, tmp->nbr))
				i = do_rarrb_a_to_b(root, tmp->index);
			else if (i == rrarb_a_to_b(root, tmp->nbr))
				i = do_rrarb_a_to_b(root, tmp->index);
			else if (i == rrarrb_a_to_b(root, tmp->nbr))
				i = do_rrarrb_a_to_b(root, tmp->index);
			else
				tmp = tmp->next;
		}
		refactor(root);
		tmp = root->a;
	}
}

void	ft_push_b_to_a(t_root *root)
{
	int	half;

	half = locate_nbr(root->b, max(root->b))->index;
	if (half > stack_len(root->b) / 2)
		half = 2;
	else
		half = 1;
	while (max(root->b) != root->b->nbr && half == 1)
		rb(root);
	while (max(root->b) != root->b->nbr && half == 2)
		rrb(root);
	while (root->b)
		pa(root);
}

void	ft_sort_big(t_root *root)
{
	pb(root);
	pb(root);
	ft_push_a_to_b(root);
	ft_push_b_to_a(root);
}
