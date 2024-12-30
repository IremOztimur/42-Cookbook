/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type_a_to_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:20 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:11:20 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rarb_a_to_b(t_root *root, int nbr)
{
	if (locate_nbr(root->a, nbr)->index > ft_find_index_in_b(root->b, nbr))
		return (locate_nbr(root->a, nbr)->index);
	else
		return (ft_find_index_in_b(root->b, nbr));
}

int	rarrb_a_to_b(t_root *root, int nbr)
{
	return (locate_nbr(root->a, nbr)->index + stack_len(root->b)
		- ft_find_index_in_b(root->b, nbr));
}

int	rrarb_a_to_b(t_root *root, int nbr)
{
	return (stack_len(root->a) - locate_nbr(root->a, nbr)->index
		+ ft_find_index_in_b(root->b, nbr));
}

int	rrarrb_a_to_b(t_root *root, int nbr)
{
	if (stack_len(root->a) - locate_nbr(root->a, nbr)->index
		> stack_len(root->b) - ft_find_index_in_b(root->b, nbr))
		return (stack_len(root->a) - locate_nbr(root->a, nbr)->index);
	else
		return (stack_len(root->b) - ft_find_index_in_b(root->b, nbr));
}

int	ft_rotate_type_a_to_b(t_root *root)
{
	t_stack	*a;
	int		i;

	a = root->a;
	i = rarb_a_to_b(root, a->nbr);
	while (a)
	{
		if (i > rarb_a_to_b(root, a->nbr))
			i = rarb_a_to_b(root, a->nbr);
		else if (i > rarrb_a_to_b(root, a->nbr))
			i = rarrb_a_to_b(root, a->nbr);
		else if (i > rrarb_a_to_b(root, a->nbr))
			i = rrarb_a_to_b(root, a->nbr);
		else if (i > rrarrb_a_to_b(root, a->nbr))
			i = rrarrb_a_to_b(root, a->nbr);
		else
			a = a->next;
	}
	return (i);
}
