/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaygisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:13:00 by agaygisi          #+#    #+#             */
/*   Updated: 2023/03/02 23:13:00 by agaygisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_stack *start)
{
	while (start)
	{
		ft_printf("%d\n", start->nbr);
		start = start->next;
	}
}

void	print_nodes(t_stack *stack)
{
	ft_printf("#################################\n");
	while (stack != 0)
	{
		ft_printf("---------------------------------\n");
		ft_printf("nbr:           %d\n", stack->nbr);
		ft_printf("prev. addr.:   %p\n", stack->prev);
		ft_printf("current addr.: %p\n", stack);
		ft_printf("next addr.:    %p\n", stack->next);
		ft_printf("index:         %d\n", stack->index);
		ft_printf("---------------------------------\n");
		ft_printf("\n");
		stack = stack->next;
	}
	ft_printf("#################################\n");
}

void	print_stack_2(t_root *root, t_stack **a, t_stack **b, int *max_len)
{
	if (*max_len <= root->a_len && *max_len > root->b_len)
	{
		ft_printf("% -4d\n", (*a)->nbr);
		*a = (*a)->next;
		(*max_len)--;
	}
	else if (*max_len > root->a_len && *max_len <= root->b_len)
	{
		ft_printf("        % 4d\n", (*b)->nbr);
		*b = (*b)->next;
		(*max_len)--;
	}
	else
	{
		ft_printf("% -4d    % 4d\n", (*a)->nbr, (*b)->nbr);
		*a = (*a)->next;
		*b = (*b)->next;
		(*max_len)--;
	}
}

void	print_stack(t_root *root)
{
	int		max_len;
	t_stack	*a;
	t_stack	*b;

	a = root->a;
	b = root->b;
	if (root->a_len > root->b_len)
		max_len = root->a_len;
	else
		max_len = root->b_len;
	while (max_len >= 1)
		print_stack_2(root, &a, &b, &max_len);
	ft_printf("-----    -----\n");
	ft_printf("  a        b\n");
	ft_printf("\n");
}
