/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:09:58 by agaygisi          #+#    #+#             */
/*   Updated: 2023/05/25 15:12:28 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

static int	str_comp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	select_path_2(char *str, t_root *root)
{
	if (str_comp(str, "sa\n"))
		sa_check(root);
	else if (str_comp(str, "sb\n"))
		sb_check(root);
	else if (str_comp(str, "ss\n"))
		ss_check(root);
	else if (str_comp(str, "pa\n"))
		pa_check(root);
	else if (str_comp(str, "pb\n"))
		pb_check(root);
	else
		ft_exit();
}

void	select_path(char *str, t_root *root)
{
	if (str_comp(str, "ra\n"))
		ra_check(root);
	else if (str_comp(str, "rb\n"))
		rb_check(root);
	else if (str_comp(str, "rr\n"))
		rr_check(root);
	else if (str_comp(str, "rra\n"))
		rra_check(root);
	else if (str_comp(str, "rrb\n"))
		rrb_check(root);
	else if (str_comp(str, "rrr\n"))
		rrr_check(root);
	else
		select_path_2(str, root);
}

void	checker(t_root *root)
{
	char	*str;

	while ((root->a != 0 || root->b != 0))
	{
		str = get_next_line(0);
		if (!str || str[0] == '\n')
			break ;
		select_path(str, root);
		free(str);
	}
	if (is_sorted(root->a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int count, char *arg[])
{
	t_root	root;
	int		size;

	check_input(count, arg);
	init_stack(&root, arg);
	ft_check_errors(root.a);
	root.b = NULL;
	size = stack_len(root.a);
	if (size <= 1 && count)
		return (0);
	if (is_sorted(root.a))
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	checker(&root);
}
