/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:46 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:10:46 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_root *root)
{
	t_stack	*old_end;
	t_stack	*new_end;

	if (stack_len(root->a) < 2)
		return ;
	old_end = stack_last(root->a);
	new_end = root->a;
	root->a = root->a->next;
	root->a->prev = 0;
	old_end->next = new_end;
	new_end->prev = old_end;
	new_end->next = 0;
	ft_printf("ra\n");
	refactor(root);
}

void	rb(t_root *root)
{
	t_stack	*old_end;
	t_stack	*new_end;

	if (stack_len(root->b) < 2)
		return ;
	old_end = stack_last(root->b);
	new_end = root->b;
	root->b = root->b->next;
	root->b->prev = 0;
	old_end->next = new_end;
	new_end->prev = old_end;
	new_end->next = 0;
	ft_printf("rb\n");
	refactor(root);
}

static void	rr_a(t_root *root)
{
	t_stack	*old_end;
	t_stack	*new_end;

	if (stack_len(root->a) < 2)
		return ;
	old_end = stack_last(root->a);
	new_end = root->a;
	root->a = root->a->next;
	root->a->prev = 0;
	old_end->next = new_end;
	new_end->prev = old_end;
	new_end->next = 0;
	refactor(root);
}

static void	rr_b(t_root *root)
{
	t_stack	*old_end;
	t_stack	*new_end;

	if (stack_len(root->b) < 2)
		return ;
	old_end = stack_last(root->b);
	new_end = root->b;
	root->b = root->b->next;
	root->b->prev = 0;
	old_end->next = new_end;
	new_end->prev = old_end;
	new_end->next = 0;
	refactor(root);
}

void	rr(t_root *root)
{
	rr_a(root);
	rr_b(root);
	ft_printf("rr\n");
}
