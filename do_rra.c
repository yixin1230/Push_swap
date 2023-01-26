/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rra.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:17 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:59:07 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	do_rra(t_data *all)
{
	if (!all->a)
		return ;
	all->a = all->a->prev;
	if (all->do_write == 1)
		write(1, "rra\n", 4);
}
