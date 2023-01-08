/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 18:54:12 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"



static void	see_the_stack(t_node *link)
{
	for (t_node *curr = link; curr != NULL; curr = curr->next)
		ft_printf("%i, ", curr->content);
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_data	*all;

	all = create_data(argv, argc);
	if (argc <= 1 || fill_stack_a(all) == -1)
		return (0);
	if (!all->a)
		return (0);
	if (is_storted(all))
		return (free_all(all), 0);
	//stort stack，如果len<=5用less_than_5,如果大于5，用radix.
	//free all
	//test:
	less_than_5(all);
	ft_printf("len: %i,a: ", stack_len(&all->a));
	see_the_stack(all->a);
	ft_printf("b: ");
	see_the_stack(all->b);
	return (free_all(all), 0);
}
