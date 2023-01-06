/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_sa.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:42:24 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 13:00:19 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_sa(t_data *all)
{
	long	tmp;

	if (!all->a)
		return ;
	tmp = all->a->content;
	all->a->content = all->a->next->content;
	all->a->next->content = tmp;
	write(1, "sa\n", 3);
}