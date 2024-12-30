/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:32 by agaygisi          #+#    #+#             */
/*   Updated: 2023/05/25 15:05:23 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_root	root;
	root.a = NULL;
	root.b = NULL;
	root.a_len = 0;
	root.b_len = 0;

	if (argc == 1)
		return (0);
	check_input(argc, argv);
	init_stack(&root, argv);
	ft_check_errors(root.a);
	if (is_sorted(root.a))
		return (0);
	send_sort(&root);
	return (0);
}
