/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_sb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:45:04 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/03 19:45:05 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	do_sb(t_data *all)
{
	long	tmp;

	if (!all->b)
		return ;
	tmp = all->b->content;
	all->b->content = all->b->next->content;
	all->b->next->content = tmp;
	write(1, "sb\n", 3);
}