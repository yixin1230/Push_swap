/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do_ss.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 19:47:30 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 12:30:44 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	do_ss(t_data *all)
{
	do_sa(all);
	do_sb(all);
	write(1, "ss\n", 3);
}