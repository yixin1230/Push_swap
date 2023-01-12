/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   link_add_top.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/06 10:15:08 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/12 11:17:22 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	link_add_top(t_data *all, char stack_name, long nb)
{
	t_node	**top;
	t_node	*new;

	if (stack_name == 'a')
		top = &all->a;
	else
		top = &all->b;
	if (*top)
	{
		new = newnode(nb);
		new->next = *top;
		new->prev = (*top)->prev;
		(*top)->prev = new;
		(*top)->prev->next = new;
		*top = (*top)->prev;
		return ;
	}	
	(*top) = newnode(nb);
	(*top)->next = *top;
	(*top)->prev = *top;
}
