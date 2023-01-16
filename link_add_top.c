/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   link_add_top.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/06 10:15:08 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 13:45:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	link_add_top(t_data *all, char stack_name, t_node *new)
{
	t_node	**top;

	if (!new)
		return ;
	if (stack_name == 'a')
		top = &all->a;
	else
		top = &all->b;
	if (*top)
	{
		new->next = *top;
		new->prev = (*top)->prev;
		(*top)->prev = new;
		new->prev->next = new;
		*top = (*top)->prev;
	}
	else
		*top = new;
}
