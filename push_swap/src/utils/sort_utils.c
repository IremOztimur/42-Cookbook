/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:12:55 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:12:55 by agaygisi         ###   ########.fr       */
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

int	ft_find_index_in_b(t_stack *b, int nbr)
{
	int		tmp;
	t_stack	*tmpb;

	tmp = min(b);
	tmpb = b;
	if (min(b) > nbr)
		return (locate_nbr(b, max(b))->index);
	if (max(b) < nbr)
		return (locate_nbr(b, max(b))->index);
	while (tmpb)
	{
		if (tmpb->nbr < nbr && tmpb->nbr > tmp)
			tmp = tmpb->nbr;
		tmpb = tmpb->next;
	}
	return (locate_nbr(b, tmp)->index);
}

int	ft_find_index_in_a(t_stack *a, int nbr)
{
	int		tmp;
	t_stack	*tmpa;

	tmp = max(a);
	tmpa = a;
	if (min(a) > nbr)
		return (locate_nbr(a, min(a))->index);
	if (max(a) < nbr)
		return (locate_nbr(a, min(a))->index);
	while (tmpa)
	{
		if (tmp > tmpa->nbr && tmpa->nbr > nbr)
			tmp = tmpa->nbr;
		tmpa = tmpa->next;
	}
	return (locate_nbr(a, tmp)->index);
}

void	send_sort(t_root *root)
{
	if (stack_len(root->a) <= 1)
		return ;
	else if (stack_len(root->a) == 2 && !is_sorted(root->a))
		sa(root);
	else if (stack_len(root->a) < 6)
		ft_sort_small(root);
	else
		ft_sort_big(root);
}
