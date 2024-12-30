/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:25 by ioztimur          #+#    #+#             */
/*   Updated: 2023/05/25 16:15:22 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

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
void	pa_check(t_root *root);
void	pb_check(t_root *root);
void	rra_check(t_root *root);
void	rrb_check(t_root *root);
void	rrr_check(t_root *root);
void	ra_check(t_root *root);
void	rb_check(t_root *root);
void	rr_check(t_root *root);
void	refactor(t_root *root);
void	sa_check(t_root *root);
void	sb_check(t_root *root);
void	ss_check(t_root *root);
int		is_sorted(t_stack *stack);
int		is_rev_sorted(t_stack *stack);
int		is_gen_sorted(t_stack *stack);
t_stack	*locate_index(t_stack *stack, int index);
t_stack	*locate_nbr(t_stack *stack, int nbr);
int		lowest_index(t_stack *stack);
int		highest_index(t_stack *stack);
int		max(t_stack *x);
int		min(t_stack *x);
t_stack	*new_stack(long nbr);
void	stack_add_back(t_stack **stack, t_stack *newarg);
void	stack_add_front(t_stack **stack, t_stack *newarg);
void	reindex(t_stack *stack);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_first(t_stack *stack);
int		stack_len(t_stack *stack);
void	init_stack(t_root *root, char *arg[]);
void	check_input(int argc, char *argv[]);
void	ft_exit(void);
void	check_input2(char *s);

#endif
