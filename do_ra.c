/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_ra.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:07 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:09:52 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_ra(t_data *all)
{
	if (!all->a)
		return ;
	if(all->a != all->a->next)
	{
		all->a = all->a->next;
		write(1, "ra\n", 3);
	}
}
