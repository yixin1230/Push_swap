/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:12:05 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

#include <stdio.h>

/* static void	see_the_stack(t_node **link)
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
} */

int	main(int argc, char **argv)
{
	t_data	*all;
	long	len;

	all = create_data(argv, argc);
	if (argc <= 1 || fill_stack_a(all) == -1)
		return (0);
	if (!all->a)
		return (0);
	if (is_storted(all) == 1)
	{
		if (all->a)
			free_stack_a(all);
		return (0);
	}
	len = stack_len(&all->a);
	if (len <= 5)
		less_than_5(all);
	else
		radix_sort(all);
	//free_stack_a(all);
	//system("leaks push_swap");
	return (0);
}
