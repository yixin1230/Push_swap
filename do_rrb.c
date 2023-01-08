/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rrb.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:22 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 17:50:58 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	do_rrb(t_data *all)
{
	t_node	*curr;

	if (!all->b)
		return ;
	curr = all->b;
	while (curr->next != NULL)
		curr = curr->next;
	link_add_top(all, 'b', curr->content);
	curr->prev->next = NULL;
	curr->prev = NULL;
	free(curr);
	curr = NULL;
	write(1, "rrb\n", 4);
}
