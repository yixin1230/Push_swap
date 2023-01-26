/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node_utils.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 20:39:47 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 19:27:30 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

t_node	*newnode(long nb);
void	add_back(t_node **top, t_node *new);
long	stack_len(t_node **top);
long	is_storted(t_data	*all);

long	is_storted(t_data	*all)
{
	t_node	*curr;
	long	i;

	curr = all->a;
	i = 0;
	find_med(all, 'a');
	if (!all->a)
		return (1);
	while (curr != all->a->prev)
	{
		if (curr->index != i)
			return (0);
		curr = curr->next;
		i++;
	}
	return (1);
}

long	stack_len(t_node **top)
{
	long	len;
	t_node	*curr;

	len = 0;
	if (*top)
	{
		curr = *top;
		len = 1;
		curr = curr->next;
		while (curr != *top)
		{
			len++;
			curr = curr->next;
		}
	}
	return (len);
}

t_node	*newnode(long nb)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = nb;
	new->next = new;
	new->prev = new;
	new->index = 0;
	return (new);
}

void	add_back(t_node **top, t_node *new)
{
	if (!new)
	{
		return ;
	}
	if (!*top)
		(*top) = new;
	else
	{
		new->next = *top;
		new->prev = (*top)->prev;
		new->prev->next = new;
		(*top)->prev = new;
	}
}
