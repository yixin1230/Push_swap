/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   less_than_5.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/03 18:53:39 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 09:47:37 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include<stdio.h>

static void	solve_2(t_data *all)
{
	if (all->a->content > all->a->next->content)
		do_sa(all);
}

static void	solve_3(t_data *all)
{
	long	a;
	long	b;
	long	c;

	a = all->a->content;
	b = all->a->next->content;
	c = all->a->prev->content;
	if (a > b && a < c && b < c)
		do_sa(all);
	else if (a > b && a > c && b > c)
	{
		do_sa(all);
		do_rra(all);
	}	
	else if (a > b && a > c && b < c)
		do_ra(all);
	else if (a < b && a < c && b > c)
	{
		do_sa(all);
		do_ra(all);
	}
	else if (a < b && a > c && b > c)
		do_rra(all);
}

static void	solve_4(t_data *all)
{
	while (all->a->content > all->min)
		do_ra(all);
	if (is_storted(all))
		return ;
	do_pb(all);
	solve_3(all);
	do_pa(all);
}

static void	solve_5(t_data *all)
{
	while (all->a->content >= all->med)
		do_ra(all);
	do_pb(all);
	while (all->a->content >= all->med)
		do_ra(all);
	do_pb(all);
	if (all->b->content < all->b->next->content)
		do_sb(all);
	solve_3(all);
	do_pa(all);
	do_pa(all);
}

void	less_than_5(t_data *all)
{
	long	len;

	len = stack_len(&all->a);
	find_med(all, 'a');
	if (len == 1)
		return ;
	else if (len == 2)
		solve_2(all);
	else if (len == 3)
		solve_3(all);
	else if (len == 4)
		solve_4(all);
	else if (len == 5)
		solve_5(all);
}
