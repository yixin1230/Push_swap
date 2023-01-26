/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 22:27:56 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 10:09:35 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/libft/libft.h"
#include <stdio.h>

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
	else if (!ft_strncmp(line, "pb", 2))
	{
		do_pb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "ra", 2))
	{
		do_ra(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rb", 2))
	{
		do_rb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rr", 2))
	{
		do_rr(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rrb", 3))
	{
		do_rrb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rra", 3))
	{
		do_rra(check);
		return (1);
	}
	else if (!ft_strncmp(line, "rrr", 3))
	{
		do_rrr(check);
		return (1);
	}
	else
		exit(1);
	return (-1);
}

int	ps_get_next_line(int fd, char **line)
{
	int		nb;
	char	buff;
	char	str[5];
	int		i;

	if (fd < 0)
		return (-1);
	nb = 8;
	i = 0;
	while (nb > 0)
	{
		nb = read(fd, &buff, 1);
		if (nb < 0)
			return (-1);
		str[i] = buff;
		i++;
		if (buff == '\n')
			break ;
	}
	str[i] = '\0';
	*line = ft_strdup(str);
	return (1);
}

void	checker(t_data *check)
{
	char	*line;

	while (ps_get_next_line(0, &line) == 1)
	{
		flag_check(line, check);
		ps_get_next_line(0, &line);
	}
}

static void	see_the_stack(t_node **link)
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