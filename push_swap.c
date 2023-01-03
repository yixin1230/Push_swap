/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/03 18:16:33 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*all;

	all = create_data(argv, argc);
	if (argc <= 1 || fill_stack_a(all) == -1)
		return (0);
	if (!all->a)
		return (0);
	ft_printf("ok");
	return (0);
}
