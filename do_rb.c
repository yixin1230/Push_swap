/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:11 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:58:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_rb(t_data *all)
{
	if (!all->b)
		return ;
	if (all->b != all->b->next)
	{
		all->b = all->b->next;
		if (all->do_write == 1)
			write(1, "rb\n", 3);
	}
}
