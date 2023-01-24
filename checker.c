/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 22:27:56 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/24 22:27:56 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/libft/libft.h"

static int	flag_check(char *line, t_data *check)
{
	if (!ft_strncmp(line, "sa", 2))
	{
		do_sa(check);
		return (1);
	}
	else if (!ft_strncmp(line, "sb", 2))
	{
		do_sb(check);
		return (1);
	}
	else if (!ft_strncmp(line, "ss", 2))
	{
		do_ss(check);
		return (1);
	}
	else if (!ft_strncmp(line, "pa", 2))
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

char	*ps_get_next_line(int fd)
{
	int		nb;
	char	buff;
	char	str[5];
	int		i;

	if (fd < 0)
		return (NULL);
	nb = 8;
	i = 0;
	while (nb < 0)
	{
		nb = read(fd, &buff, 1);
		if (nb < 0)
			return (NULL);
		str[i] = buff;
		i++;
		if (buff == '\n')
			break ;
	}
	str[i] = '\0';
	return (ft_strdup(str));
}

void	checker(t_data *check)
{
	char	*line;

	line = ps_get_next_line(0);
	while (line != NULL)
	{
		flag_check(line, check);
		line = ps_get_next_line(0);
	}
}

int	main(int argc, char **argv)
{
	t_data	*check;

	check = create_data(argv, argc);
	if (fill_stack_a(check) == -1)
		return (0);
	checker(check);
	if (is_storted(check) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	//free_all(check);
	return (0);
}