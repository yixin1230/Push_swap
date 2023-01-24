/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_error_fill_stack.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 16:29:02 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 18:14:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

static int	find_non_int(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (-1);
	while (str[i] && (str[i] <= '9' && str[i] >= '0'))
		i++;
	if (str[i] == '\0' && (str[i - 1] != '-' || str[i - 1] != '+'))
		return (1);
	return (-1);
}

static void	print_error(t_data *all)
{
	write(1, "Error\n", 6);
	if (all->a)
		free_stack_a(all);
	exit(1);
}

int	fill_stack_a(t_data *all)
{
	long	i;
	long	j;
	long	nb;

	i = 1;
	while (i < all->argc)
	{
		j = i + 1;
		if (find_non_int(all->argv[i]) == -1)
			print_error(all);
		nb = ft_atoi(all->argv[i]);
		while (j < all->argc)
		{
			if (nb == ft_atoi(all->argv[j]))
				print_error(all);
			j++;
		}
		if (nb >= MAX_INT || nb <= MIN_INT)
			print_error(all);
		add_back(&all->a, newnode(nb));
		i++;
	}
	return (1);
}
