/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rrr.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:25 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:59:24 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_rrr(t_data *all)
{
	do_rra(all);
	do_rrb(all);
	if (all->do_write == 1)
		write(1, "rrr\n", 4);
}
