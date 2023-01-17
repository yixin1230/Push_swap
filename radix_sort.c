/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 11:43:00 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/17 18:08:29 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_max_bit(long size_a)
{
	long	max_bit;

	max_bit = 0;
	while (((size_a - 1) >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	radix_sort(t_data *all)
{
	long	i;
	long	j;
	long	size_a;
	long	max_bit;

	i = 0;
	find_med(all, 'a');
	size_a = stack_len(&all->a);
	max_bit = find_max_bit(size_a);
	while (i < max_bit)
	{
		j = 0;
		while (j < size_a)
		{
			if (((all->a->index >> i) & 1) == 1)
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
