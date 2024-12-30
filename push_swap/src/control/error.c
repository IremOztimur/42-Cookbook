/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioztimur <ioztimur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 23:10:10 by ioztimur          #+#    #+#             */
/*   Updated: 2023/05/25 15:22:04 by ioztimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_str(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isalpha(s[i]))
			return (1);
		i++;
	}
	return (0);
}

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	check_input(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (ft_strlen(argv[i]) == 0)
			ft_exit();
	}
	i = 0;
	while (++i < argc)
		check_input2(argv[i]);
}

void	check_input2(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isdigit(s[i]))
			return ;
		i++;
	}
	ft_exit();
}
