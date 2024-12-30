/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:48 by ioztimur          #+#    #+#             */
/*   Updated: 2023/03/02 23:10:48 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_root *root)
{
	t_stack	*a;
	t_stack	*new_a;

	a = root->a;
	if (stack_len(root->a) < 2)
		return ;
	new_a = a->next;
	a->next = new_a->next;
	if (stack_len(root->a) > 2)
		new_a->next->prev = a;
	a->prev = new_a;
	new_a->next = a;
	new_a->prev = 0;
	ft_printf("sa\n");
	refactor(root);
}	

void	sb(t_root *root)
{
	t_stack	*b;
	t_stack	*new_b;

	b = root->b;
	if (stack_len(b) < 2)
		return ;
	new_b = b->next;
	b->next = new_b->next;
	if (stack_len(root->b) > 2)
		new_b->next->prev = b;
	b->prev = new_b;
	new_b->next = b;
	new_b->prev = 0;
	ft_printf("sb\n");
	refactor(root);
}	

static void	ss_a(t_root *root)
{
	t_stack	*a;
	t_stack	*new_a;

	a = root->a;
	if (stack_len(a) < 2)
		return ;
	new_a = a->next;
	a->next = new_a->next;
	a->prev = new_a;
	new_a->next = a;
	new_a->prev = 0;
	refactor(root);
}	

static void	ss_b(t_root *root)
{
	t_stack	*b;
	t_stack	*new_b;

	b = root->b;
	if (stack_len(b) < 2)
		return ;
	new_b = b->next;
	b->next = new_b->next;
	b->prev = new_b;
	new_b->next = b;
	new_b->prev = 0;
	refactor(root);
}	

void	ss(t_root *root)
{
	ss_a(root);
	ss_b(root);
	ft_printf("ss\n");
	print_stack(root);
}
