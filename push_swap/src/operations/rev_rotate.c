/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:45 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:10:45 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_root *root)
{
	t_stack	*old_start;
	t_stack	*new_start;

	if (stack_len(root->a) < 2)
		return ;
	old_start = root->a;
	new_start = stack_last(root->a);
	new_start->prev->next = 0;
	old_start->prev = new_start;
	new_start->next = old_start;
	new_start->prev = 0;
	root->a = new_start;
	ft_printf("rra\n");
	refactor(root);
}

void	rrb(t_root *root)
{
	t_stack	*old_start;
	t_stack	*new_start;

	if (stack_len(root->b) < 2)
		return ;
	old_start = root->b;
	new_start = stack_last(root->b);
	new_start->prev->next = 0;
	old_start->prev = new_start;
	new_start->next = old_start;
	new_start->prev = 0;
	root->b = new_start;
	ft_printf("rrb\n");
	refactor(root);
}

static void	rrr_a(t_root *root)
{
	t_stack	*old_start;
	t_stack	*new_start;

	if (stack_len(root->a) < 2)
		return ;
	old_start = root->a;
	new_start = stack_last(root->a);
	new_start->prev->next = 0;
	old_start->prev = new_start;
	new_start->next = old_start;
	new_start->prev = 0;
	root->a = new_start;
	refactor(root);
}

static void	rrr_b(t_root *root)
{
	t_stack	*old_start;
	t_stack	*new_start;

	if (stack_len(root->b) < 2)
		return ;
	old_start = root->b;
	new_start = stack_last(root->b);
	new_start->prev->next = 0;
	old_start->prev = new_start;
	new_start->next = old_start;
	new_start->prev = 0;
	root->b = new_start;
	refactor(root);
}

void	rrr(t_root *root)
{
	rrr_a(root);
	rrr_b(root);
	ft_printf("rrr\n");
}
