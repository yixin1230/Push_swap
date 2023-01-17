/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   less_than_100.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/16 13:41:18 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 16:44:29 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	less_than_100(t_data *all)
{
	t_node	*top;
	t_node	*end;

	top = all->a;
	end = all->a->prev;
	find_med(all, 'a');
	while (1)
	{
		if (top->content >= all->med)
			do_ra(all);
		else
			do_pb(all);
		top = top->next;
		if (top == end)
			break ;
	}
	find_med(all, 'b');
}
