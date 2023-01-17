/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_sa.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:42:24 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 16:40:19 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_sa(t_data *all)
{
	long	tmp;

	if (!all->a && all->a->next != all->a)
		return ;
	tmp = all->a->content;
	all->a->content = all->a->next->content;
	all->a->next->content = tmp;
	tmp = all->a->index;
	all->a->index = all->a->next->index;
	all->a->next->index = tmp;
	write(1, "sa\n", 3);
}
