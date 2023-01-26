/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_sb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:45:04 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:59:39 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	do_sb(t_data *all)
{
	long	tmp;

	if (!all->b && all->b->next != all->b)
		return ;
	tmp = all->b->content;
	all->b->content = all->b->next->content;
	all->b->next->content = tmp;
	tmp = all->b->index;
	all->b->index = all->b->next->index;
	all->b->next->index = tmp;
	if (all->do_write == 1)
		write(1, "sb\n", 3);
}
