/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node_utils.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 20:39:47 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 10:01:35 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_node	*newnode(long nb);
void	add_back(t_node **top, t_node *new);
long	stack_len(t_node **top);
long	is_storted(t_data	*all);

long	is_storted(t_data	*all)
{
	t_node	*curr;

	curr = all->a;
	while (curr->next != NULL && curr != NULL)
	{
		if (curr->content > curr->next->content)
			return (0);
		curr = curr->next;
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
