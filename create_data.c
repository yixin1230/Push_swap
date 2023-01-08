/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_data.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 16:49:48 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 17:45:29 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

t_data	*create_data(char **argv, int argc)
{
	t_data	*all;

	all = malloc(sizeof(t_data));
	if (!all)
		return (NULL);
	all->a = NULL;
	all->b = NULL;
	all->argv = argv;
	all->argc = argc;
	all->do_write = 0;
	all->min = 0;
	all->max = 0;
	all->med = 0;
	return (all);
}
