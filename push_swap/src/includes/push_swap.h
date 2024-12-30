/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:23 by ioztimur          #+#    #+#             */
/*   Updated: 2023/05/25 16:15:25 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../lib/printf/ft_printf.h"
# include "../../lib/gnl/get_next_line.h"
# include "../../lib/libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_root
{
	struct s_stack	*a;
	struct s_stack	*b;
	int				a_len;
	int				b_len;
}	t_root;

int		ft_check_str(const char *s);
int		ft_is_int(long a);
void	ft_is_stack_int(t_stack *a);
void	ft_check_dup(t_stack *a, int i, int j);
int		ft_check_sep(char *s);
void	ft_check_errors(t_stack *a);
void	pa(t_root *root);
void	pb(t_root *root);
void	rra(t_root *root);
void	rrb(t_root *root);
void	rrr(t_root *root);
void	ra(t_root *root);
void	rb(t_root *root);
void	rr(t_root *root);
void	refactor(t_root *root);
void	sa(t_root *root);
void	sb(t_root *root);
void	ss(t_root *root);
int		do_rarb_a_to_b(t_root *root, int index);
int		do_rarrb_a_to_b(t_root *root, int index);
int		do_rrarb_a_to_b(t_root *root, int index);
int		do_rrarrb_a_to_b(t_root *root, int index);
int		do_rarb_b_to_a(t_root *root, int index);
int		do_rarrb_b_to_a(t_root *root, int index);
int		do_rrarb_b_to_a(t_root *root, int index);
int		do_rrarrb_b_to_a(t_root *root, int index);
void	ft_push_a_to_b(t_root *root);
void	ft_push_b_to_a(t_root *root);
void	ft_sort_big(t_root *root);
void	ft_sort_three(t_root *root);
void	ft_sort_small(t_root *root);
int		is_sorted(t_stack *stack);
int		is_rev_sorted(t_stack *stack);
int		is_gen_sorted(t_stack *stack);
int		rarb_a_to_b(t_root *root, int nbr);
int		rarrb_a_to_b(t_root *root, int nbr);
int		rrarb_a_to_b(t_root *root, int nbr);
int		rrarrb_a_to_b(t_root *root, int nbr);
int		ft_rotate_type_a_to_b(t_root *root);
int		rarb_b_to_a(t_root *root, int nbr);
int		rarrb_b_to_a(t_root *root, int nbr);
int		rrarb_b_to_a(t_root *root, int nbr);
int		rrarrb_b_to_a(t_root *root, int nbr);
int		ft_rotate_type_b_to_a(t_root *root);
t_stack	*locate_index(t_stack *stack, int index);
t_stack	*locate_nbr(t_stack *stack, int nbr);
int		lowest_index(t_stack *stack);
int		highest_index(t_stack *stack);
int		max(t_stack *x);
int		min(t_stack *x);
int		ft_find_index_in_b(t_stack *b, int nbr);
int		ft_find_index_in_a(t_stack *a, int nbr);
void	send_sort(t_root *root);
t_stack	*new_stack(long nbr);
void	stack_add_back(t_stack **stack, t_stack *newarg);
void	stack_add_front(t_stack **stack, t_stack *newarg);
void	reindex(t_stack *stack);
void	send_sort(t_root *root);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_first(t_stack *stack);
int		stack_len(t_stack *stack);
void	init_stack(t_root *root, char *arg[]);
void	print_list(t_stack *start);
void	print_nodes(t_stack *stack);
void	print_stack(t_root *root);
void	check_input(int argc, char *argv[]);
void	ft_exit(void);
void	check_input2(char *s);

#endif
