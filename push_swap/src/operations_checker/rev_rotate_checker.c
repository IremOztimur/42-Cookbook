/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_checker.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:03 by ioztimur          #+#    #+#             */
/*   Updated: 2023/03/02 23:11:03 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra_check(t_root *root)
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

void	rrb_check(t_root *root)
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

static void	rrr_a_check(t_root *root)
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

static void	rrr_b_check(t_root *root)
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

void	rrr_check(t_root *root)
{
	rrr_a_check(root);
	rrr_b_check(root);
}
