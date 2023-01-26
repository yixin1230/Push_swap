/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 22:27:56 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 11:48:46 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/libft/libft.h"

static int	flag_check(char *line, t_data *check)
{
	if (!ft_strncmp(line, "sa\n", 3))
	{
		do_sa(check);
		return (1);
	}
	else if (!ft_strncmp(line, "sb\n", 3))
	{
		do_sb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "ss\n", 3))
	{
		do_ss(check);
		return (1);
	}
	else if (!ft_strncmp(line, "pa\n", 3))
	{
		do_pa(check);
		return (1);
	}
	else if (!ft_strncmp(line, "pb\n", 3))
	{
		do_pb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "ra\n", 3))
	{
		do_ra(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rb\n", 3))
	{
		do_rb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rr\n", 3))
	{
		do_rr(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rrb\n", 4))
	{
		do_rrb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rra\n", 4))
	{
		do_rra(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rrr\n", 4))
	{
		do_rrr(check);
		return (1);
	}
	else if (line == NULL)
		return (1);
	else
		write (1, "Error\n", 6);
	exit (1);
}

void	checker(t_data *check)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			return ;
		flag_check(line, check);
		free(line);
	}
}

int	main(int argc, char **argv)
{
	t_data	*check;

	check = create_data(argv, argc);
	if (argc <= 1 || fill_stack_a(check) == -1)
		return (0);
	see_the_stack(&check->a);
	checker(check);
	if (is_storted(check) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	see_the_stack(&check->a);
	free_stack_a(check);
	return (0);
}