/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/03 16:26:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;

	stack_a = NULL;
	if (argc <= 1 || fill_stack_a(argv, argc, &stack_a) == -1)
		return (0);
	if(!stack_a)
		return (0);
	else
	{
		for(t_node *curr = stack_a; curr != NULL; curr=curr->next)
			ft_printf("%i ",curr->content);
	}
		ft_printf("ok");
	return(0);
}