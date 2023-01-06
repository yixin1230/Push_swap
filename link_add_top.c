/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   link_add_top.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/06 10:15:08 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 16:49:58 by yizhang       ########   odam.nl         */
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
	if (!*top)
	{
		*top = newnode(nb);
		return ;
	}	
	new = newnode(nb);
	(*top)->prev = new;
	new->next = *top;
	*top = new;
}