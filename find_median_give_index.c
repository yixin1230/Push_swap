/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_median_give_index.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 16:13:43 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 16:36:44 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	find_med(t_data *all, char stackname);

static long	*sort_array(long	*arr, long len)
{
	long	i;
	long	j;
	long	tmp;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

void	find_med(t_data *all, char stackname)
{
	long	*arr;
	long	len;
	long	i;
	long	j;
	t_node	*stack;
	t_node	*end;

	if (stackname == 'a')
		stack = all->a;
	else
		stack = all->b;
	if (!stack)
		return ;
	end = stack->prev;
	len = stack_len(&stack);
	arr = malloc(sizeof(int) * len);
	i = 0;
	if (!arr)
		return ;
	while (len > i)
	{
		arr[i] = stack->content;
		stack = stack->next;
		i++;
	}
	arr = sort_array(arr, len);
	all->med = arr[len / 2];
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (stack->content == arr[i])
				stack->index = i;
			stack = stack->next;
			j++;
		}
		i++;
	}
	free(arr);
}
