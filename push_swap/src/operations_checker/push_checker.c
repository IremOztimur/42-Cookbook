/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:11:01 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:11:01 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa_check(t_root *root)
{
	t_stack	*new_b;

	if (stack_len(root->b) == 0)
		return ;
	if (root->a != 0)
	{
		new_b = root->b->next;
		root->a->prev = root->b;
		root->a->prev->next = root->a;
		root->a = root->a->prev;
		root->b = new_b;
		if (root->b != 0)
			root->b->prev = 0;
		root->a->prev = 0;
	}
	else
	{
		root->a = root->b;
		root->b = root->b->next;
		root->a->next = 0;
		root->b->prev = 0;
	}
	refactor(root);
}

void	pb_check(t_root *root)
{
	t_stack	*new_a;

	if (stack_len(root->a) == 0)
		return ;
	if (root->b != 0)
	{
		new_a = root->a->next;
		root->b->prev = root->a;
		root->b->prev->next = root->b;
		root->b = root->b->prev;
		root->a = new_a;
		if (root->a != 0)
			root->a->prev = 0;
		root->b->prev = 0;
	}
	else
	{
		root->b = root->a;
		root->a = root->a->next;
		root->b->next = 0;
		root->a->prev = 0;
	}
	refactor(root);
}
