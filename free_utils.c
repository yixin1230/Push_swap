/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_utils.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/08 19:34:18 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:25:36 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "push_swap.h"

void	free_stack_a(t_data *all);
void	free_stack_b(t_data *all);
void	free_all(t_data *all);

void	free_stack_a(t_data *all)
{
	t_node		*track_next;
	t_node		*delete;

	if (!all->a)
		return ;
	track_next = all->a->next;
	while (track_next != all->a)
	{
		delete = track_next;
		track_next = track_next->next;
		free(delete);
	}
	free(track_next);
}

void	free_stack_b(t_data *all)
{
	t_node		*track_next;
	t_node		*delete;

	if (!all->b)
		return ;
	track_next = all->b->next;
	while (track_next != all->b)
	{
		delete = track_next;
		track_next = track_next->next;
		free(delete);
	}
	free(track_next);
}

void	free_all(t_data *all)
{
	free_stack_a(all);
	free_stack_b(all);
}
