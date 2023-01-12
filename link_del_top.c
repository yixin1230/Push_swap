/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   link_del_top.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/06 10:15:13 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/12 10:41:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	link_del_top(t_data *all, char stack_name)
{
	t_node	**top;
	t_node	*tmp;

	if (stack_name == 'a')
		top = &all->a;
	else
		top = &all->b;
	if (!*top)
		return ;
	if ((*top)->next == *top)
	{
		free(*top);
		*top = NULL;
		return ;
	}
	tmp = *top;
	*top = (*top)->next;
	tmp->prev->next = (*top); 
	(*top)->prev = tmp->prev;
	free(tmp);
}
