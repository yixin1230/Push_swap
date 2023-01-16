/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 11:43:00 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/16 18:37:37 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	radix_sort(t_data *all)
{
	long	i;
	long	j;
	long	max_bit;
	long	size_a;
	//t_node *curr;

	i = 0;
	find_med(all, 'a');
	max_bit = 0;
	size_a = stack_len(&all->a);
	while (((size_a - 1)>> max_bit) != 0)
		max_bit++;
	while (i < max_bit)
	{
		j = 0;
		while(j < size_a)
		{
			if(((all->a->index >> i) & 1) == 1)
				do_ra(all);
			else
				do_pb(all);
			j++;
		}
		while (all->b != 0)
			do_pa(all);
		i++;
	}
}