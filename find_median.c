/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_median.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/08 23:06:09 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 18:23:25 by yizhang       ########   odam.nl         */
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

	if (stackname == 'a')
		stack = all->a;
	else
		stack = all->b;
	if (!stack)
		return ;
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
	while (len > i)
	{
		j = 0;
		while (len > j)
		{
			if (arr[i] == stack->content)
				stack->index = i;
			stack = stack->next;
			j++;
		}
		i++;
	}
	free(arr);
}
