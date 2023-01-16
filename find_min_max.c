/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_min_max.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/08 23:07:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 12:59:34 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	find_min(t_data *all, char stackname);
void	find_max(t_data *all, char stackname);

void	find_min(t_data *all, char stackname)
{
	t_node	*stack;
	t_node	*end;

	if (stackname == 'a')
		stack = all->a;
	else
		stack = all->b;
	end = stack->prev;
	all->min = stack->content;
	while (stack != end)
	{
		if (stack->content < all->min)
			all->min = stack->content;
		stack = stack->next;
	}
	if (stack->content < all->min)
		all->min = stack->content;
}

void	find_max(t_data *all, char stackname)
{
	t_node	*stack;
	t_node	*end;

	if (stackname == 'a')
		stack = all->a;
	else
		stack = all->b;
	end = stack->prev;
	all->max = stack->content;
	while (1)
	{
		if (stack->content > all->max)
			all->max = stack->content;
		if (stack == end)
			break;
		stack = stack->next;
	}
}
