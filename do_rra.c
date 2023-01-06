/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rra.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:17 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 17:49:22 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	do_rra(t_data *all)
{
	t_node	*curr;

	if (!all->a)
		return ;
	curr = all->a;
	while (curr->next != NULL)
		curr = curr->next;
	link_add_top(all, 'a', curr->content);
	curr->prev->next = NULL;
	curr->prev = NULL;
	free(curr);
	curr = NULL;
	write(1, "rra\n", 4);
}
