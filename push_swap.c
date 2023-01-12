/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/12 19:25:06 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

#include <stdio.h>

static void	see_the_stack(t_node **link)
{
	t_node *curr;

	if (!*link)
		return ;
	curr = *link;
	printf("%li, ", curr->content);
	curr = curr->next;
	while (curr != *link)
	{
		printf("%li, ", curr->content);
		curr = curr->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_data	*all;
	long	len;

	all = create_data(argv, argc);
	if (argc <= 1 || fill_stack_a(all) == -1)
		return (0);
	//if (!all->a)
		//return (0);
	//if (is_storted(all))
		//return (free_all(all), 0);
	len = stack_len(&all->a);
	//test:
	if (len <= 5)
		less_than_5(all);
	else
		radix_sort(all);
	do_pb(all);
	//do_pa(all);
	//do_pa(all);
	//find_max(all,'a');
	printf("len: %li, max: %li, a: ", stack_len(&all->a),all->max);
	see_the_stack(&all->a);
	printf("b: ");
	see_the_stack(&all->b);
	return (/* free_stack_a(all), */ 0);
}
