/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_ss.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:30 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:59:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	do_ss(t_data *all)
{
	do_sa(all);
	do_sb(all);
	if (all->do_write == 1)
		write(1, "ss\n", 3);
}
