/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_sb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:45:04 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 16:40:50 by yizhang       ########   odam.nl         */
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
	write(1, "sb\n", 3);
}
