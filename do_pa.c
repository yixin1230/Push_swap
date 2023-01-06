/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_pa.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:03 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 11:02:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_pa(t_data *all)
{
	if (!all->b)
		return ;
	link_add_top(all, 'a', all->b->content);
	link_del_top(all, 'b');
	write(1, "pa\n", 3);
}
