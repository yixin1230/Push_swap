/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:14:39 by yizhang       #+#    #+#                 */
/*   Updated: 2022/12/19 11:59:10 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_error(char **str, int argc)
{
	//1.arguments not digits [ok]
	//2.arguments are bigger than an integer [ok]
	//3.there are duplicates [ok]
	int	i;
	int	j;

	i = 1;
	while(i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strlen(str[i]) == ft_strlen(str[j]))
			{
				if (ft_strncmp(str[i], str[j], ft_strlen(str[i])) == 0)
				{
					ft_printf("Error\n");
					return (-1);
				}
			}
		}
		if (find_non_int(str[i]) == -1 || ft_atoi(str[i]) > MAX_INT)
		{
			ft_printf("Error\n");
			return(-1);
		}
		i++;
	}
	return (0);
}

int	find_non_int(char *str)
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

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (0);
	if(find_error(argv, argc) == -1)
		return (0);
	else
		ft_pirntf("ok");
	return(0);
}