/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 19:26:39 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

int	main(int argc, char **argv)
{
	t_data	*all;
	long	len;

	if (argc <= 1)
		return (0);
	all = create_data(argv, argc);
	if (fill_stack_a(all) == -1)
		exit (1);
	if (!all->a)
		exit (1);
	if (is_storted(all) == 1)
		exit (1);
	len = stack_len(&all->a);
	all->do_write = 1;
	if (len <= 5)
		less_than_5(all);
	else
		radix_sort(all);
	free_stack_a(all);
	exit(EXIT_SUCCESS);
}
