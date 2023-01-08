/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_min_max.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/08 23:07:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/08 23:07:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	find_min(t_data *all, char stackname);
void	find_max(t_data *all, char stackname);

void	find_min(t_data *all, char stackname)
{
	t_node	*stack;

	if (stackname == 'a')
		stack = all->a;
	else
		stack = all->b;
	all->min = stack->content;
	while (stack != NULL)
	{
		if (stack->content <= all->min)
			all->min = stack->content;
		stack = stack->next;
	}
}

void	find_max(t_data *all, char stackname)
{
	t_node	*stack;

	if (stackname == 'a')
		stack = all->a;
	else
		stack = all->b;
	all->max = stack->content;
	while (stack)
	{
		if (stack->content < stack->next->content)
			all->max = stack->next->content;
		stack = stack->next;
	}
}
