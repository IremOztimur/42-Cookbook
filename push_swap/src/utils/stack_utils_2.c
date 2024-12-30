/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:12:59 by agaygisi          #+#    #+#             */
/*   Updated: 2023/05/25 12:52:46 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != 0)
	{
		stack = stack->next;
	}
	return (stack);
}

t_stack	*stack_first(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->prev != 0)
	{
		stack = stack->prev;
	}
	return (stack);
}

int	stack_len(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack != 0)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

static void	free_array(char **arg_new, int arg_index_new)
{
	while (arg_new[arg_index_new])
	{
		free(arg_new[arg_index_new]);
		arg_index_new++;
	}
	free(arg_new);
}

void	init_stack(t_root *root, char *arg[])
{
	char	**arg_new;
	int		arg_index;
	int		arg_index_new;

	arg_index = 1;
	while (arg[arg_index] != NULL)
	{
		arg_index_new = 0;
		arg_new = ft_split(arg[arg_index], ft_check_sep(arg[arg_index]));
		while (arg_new[arg_index_new])
		{
			stack_add_back(&root->a,
				new_stack(ft_atoi(arg_new[arg_index_new])));
			arg_index_new++;
		}
		arg_index_new = 0;
		free_array(arg_new, arg_index_new);
		arg_index++;
	}
	root->b = NULL;
	root->a_len = stack_len(root->a);
	root->b_len = stack_len(root->b);
	reindex(root->a);
}
