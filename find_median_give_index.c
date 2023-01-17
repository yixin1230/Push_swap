/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_median_give_index.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 16:13:43 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 18:00:22 by yizhang       ########   odam.nl         */
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

static void	give_index(t_node *stack, long len, long	*arr)
{
	long	i;
	long	j;

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
}

static long	*fill_arr(long	*arr, t_node *stack, long len)
{
	long	i;

	i = 0;
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	while (len > i)
	{
		arr[i] = stack->content;
		stack = stack->next;
		i++;
	}
	return (arr);
}

void	find_med(t_data *all, char stackname)
{
	long	*arr;
	long	len;
	t_node	*stack;

	if (stackname == 'a')
		stack = all->a;
	else
		stack = all->b;
	if (!stack)
		return ;
	len = stack_len(&stack);
	arr = NULL;
	arr = fill_arr(arr, stack, len);
	if (!arr)
		return ;
	arr = sort_array(arr, len);
	all->med = arr[len / 2];
	give_index(stack, len, arr);
	free(arr);
}
