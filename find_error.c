/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_error.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 14:19:55 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/03 15:28:48 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"
#include <stdlib.h>

static int	find_non_int(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] < '9' && str[i] > '0'))
		i++;
	if (str[i] == '\0' && (str[i-1] != '-' || str[i-1] != '+'))
		return (1);
	
	return (-1);
}

static node	*newnode(long nb)
{
	node *new;

	new = malloc(sizeof(node));
	if (!new)
		return (NULL);
	new->content = nb;
	new->next = NULL;
	return (new);
}

static void	add_back(node **top, node *new)
{
	node *curr;

	curr = *top;
	if (!new)
		return ;
	if (!*top)
	{
		*top = new;
		return ;
	}
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
}

int	fill_stack_a(char **str, int argc, node **stack_a)
{
	long	i;
	long	j;
	long	nb;

	i = 1;
	while (i < argc)
	{
		j = i + 1;		
		if (find_non_int(str[i]) == -1)
			return (ft_printf("1error"), -1);
		nb = ft_atoi(str[i]);
		while (j < argc)
		{
			if (nb == ft_atoi(str[j]))
				return (ft_printf("2error"), -1);
			j++;
		}
		if (nb >= MAX_INT || nb < MIN_INT)
			return (ft_printf("3error"), -1);
		add_back(stack_a, newnode(nb));
		i++;
	}
	add_back(stack_a, newnode(nb));
	return (1);
}
