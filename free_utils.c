/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_utils.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/08 19:34:18 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/08 19:34:18 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "push_swap.h"

void	free_stack_a(t_data *all);
void	free_stack_b(t_data *all);
void	free_all(t_data *all);

void	free_stack_a(t_data *all)
{
	while (all->a != NULL)
		link_del_top(all, 'a');
}

void	free_stack_b(t_data *all)
{
	while (all->b != NULL)
		link_del_top(all, 'b');
}

void	free_all(t_data *all)
{
	free_stack_a(all);
	free_stack_b(all);
}
