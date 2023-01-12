/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:11 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/12 09:50:38 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_rb(t_data *all)
{
	if (!all->b)
		return ;
	add_back(all->b, newnode(all->b->content));
	link_del_top(all, 'b');
	write(1, "rb\n", 3);
}
