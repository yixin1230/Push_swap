/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_ra.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 09:16:17 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_ra(t_data *all)
{
	if (!all->a)
		return ;
	add_back(&all->a, newnode(all->a->content));
	link_del_top(all, 'a');
	write(1, "ra\n", 3);
}
