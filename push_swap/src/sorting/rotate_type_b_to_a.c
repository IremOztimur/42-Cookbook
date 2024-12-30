/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type_b_to_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:21 by ioztimur          #+#    #+#             */
/*   Updated: 2023/03/02 23:11:21 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rarb_b_to_a(t_root *root, int nbr)
{
	if (locate_nbr(root->b, nbr)->index > ft_find_index_in_a(root->a, nbr))
		return (locate_nbr(root->b, nbr)->index);
	else
		return (ft_find_index_in_a(root->a, nbr));
}

int	rarrb_b_to_a(t_root *root, int nbr)
{
	return (ft_find_index_in_a(root->a, nbr) + stack_len(root->b)
		- locate_nbr(root->b, nbr)->index);
}

int	rrarb_b_to_a(t_root *root, int nbr)
{
	return (locate_nbr(root->b, nbr)->index + stack_len(root->a)
		- ft_find_index_in_a(root->a, nbr));
}

int	rrarrb_b_to_a(t_root *root, int nbr)
{
	if (stack_len(root->a) - ft_find_index_in_a(root->a,
			nbr) > stack_len(root->b) - locate_nbr(root->b, nbr)->index)
		return (stack_len(root->a) - ft_find_index_in_a(root->a, nbr));
	else
		return (stack_len(root->b) - locate_nbr(root->b, nbr)->index);
}

int	ft_rotate_type_b_to_a(t_root *root)
{
	t_stack	*b;
	int		i;

	b = root->b;
	i = rarb_b_to_a(root, b->nbr);
	while (b)
	{
		if (i > rarb_b_to_a(root, b->nbr))
			i = rarb_b_to_a(root, b->nbr);
		else if (i > rarrb_b_to_a(root, b->nbr))
			i = rarrb_b_to_a(root, b->nbr);
		else if (i > rrarb_b_to_a(root, b->nbr))
			i = rrarb_b_to_a(root, b->nbr);
		else if (i > rrarrb_b_to_a(root, b->nbr))
			i = rrarrb_b_to_a(root, b->nbr);
		else
			b = b->next;
	}
	return (i);
}
