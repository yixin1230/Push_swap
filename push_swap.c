/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 16:53:45 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"



static void	see_the_stack(t_node *link)
{
	for(t_node *curr = link; curr != NULL; curr = curr->next)
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
	//do_sa(all);
	//link_del_top(all,'a');
	do_pb(all);
	ft_printf("a: "); see_the_stack(all->a);
	ft_printf("b: "); see_the_stack(all->b);
	ft_printf("ok");
	return (0);
}
