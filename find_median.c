/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_median.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/08 23:06:09 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/08 23:06:09 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	sort_array(long	*arr, int len)
{

}

void	find_med(t_data *all, t_node *stack)
{
	long	*arr;
	long	len;
	long	med;

	len = stack_len(&all->a);
	arr = mallc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	while (len)
	{
		arr[len] = stack->content;
		stack = stack->next;
		len--;
	}

	arr = NULL;
}