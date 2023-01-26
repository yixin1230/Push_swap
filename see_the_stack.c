/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   see_the_stack.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 10:15:56 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 10:16:55 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	see_the_stack(t_node **link)
{
	t_node	*curr;

	if (!*link)
		return ;
	curr = *link;
	while (1)
	{
		printf("%li:%li, ", curr->index, curr->content);
		curr = curr->next;
		if (curr == *link)
			break ;
	}
	printf("\n");
}
