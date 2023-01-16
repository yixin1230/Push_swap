/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_rb.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:11 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 12:17:17 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	do_rb(t_data *all)
{
	if (!all->b)
		return ;
	all->b = all->b->next;
	write(1, "rb\n", 3);
}
