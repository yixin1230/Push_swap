/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:16:21 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/06 18:47:00 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648



typedef struct nodes
{
	long			content;
	struct nodes	*next;
	struct nodes	*prev;
}t_node;

typedef struct datas
{
	t_node	*a;
	t_node	*b;
	char	**argv;
	int		argc;
	int		do_write;
}t_data;

int		fill_stack_a(t_data	*all);
t_data	*create_data(char **argv, int argc);
t_node	*newnode(long nb);
void	add_back(t_node **top, t_node *new);
void	do_sa(t_data *all);
void	do_sb(t_data *all);
void	do_ss(t_data *all);
void	do_pa(t_data *all);
void	do_pb(t_data *all);
void	link_del_top(t_data *all, char stack_name);
void	link_add_top(t_data *all, char stack_name, long nb);
void	do_ra(t_data *all);
void	do_rb(t_data *all);
void	do_rr(t_data *all);
void	do_rra(t_data *all);
void	do_rrb(t_data *all);
void	do_rrr(t_data *all);
long	stack_len(t_node **top);
void	less_than_5(t_data *all);
#endif
