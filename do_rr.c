/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rr.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:14 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:58:59 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_rr(t_data *all)
{
	do_ra(all);
	do_rb(all);
	if (all->do_write == 1)
		write(1, "rr\n", 3);
}
