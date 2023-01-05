/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   node_utils.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/05 20:39:47 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/05 20:39:47 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*newnode(long nb);
void	add_back(t_node **top, t_node *new);

t_node	*newnode(long nb)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = nb;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	add_back(t_node **top, t_node *new)
{
	t_node	*curr;

	curr = *top;
	if (!new)
		return ;
	if (!*top)
	{
		*top = new;
		return ;
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	new->prev = curr;
}