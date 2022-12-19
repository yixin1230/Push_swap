/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_error.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 14:19:55 by yizhang       #+#    #+#                 */
/*   Updated: 2022/12/19 14:36:42 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

static int	find_non_int(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (-1);
		i++;
	}
	return (0);
}

int	find_error(char **str, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strlen(str[i]) == ft_strlen(str[j]))
			{
				if (ft_strncmp(str[i], str[j], ft_strlen(str[i])) == 0)
					return (ft_printf("Error\n"), -1);
			}
			j++;
		}
		if (find_non_int(str[i]) == -1 || ft_atoi(str[i]) > MAX_INT)
			return (ft_printf("Error\n"), -1);
		i++;
	}
	return (0);
}
