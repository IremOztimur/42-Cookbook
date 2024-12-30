/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refactor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:44 by ioztimur          #+#    #+#             */
/*   Updated: 2023/03/02 23:10:44 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	refactor(t_root *root)
{
	root->a = stack_first(root->a);
	root->b = stack_first(root->b);
	root->a_len = stack_len(root->a);
	root->b_len = stack_len(root->b);
	reindex(root->a);
	reindex(root->b);
}
