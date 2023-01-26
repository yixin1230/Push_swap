/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yizhang <yizhang@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/19 09:16:21 by yizhang       #+#    #+#                 */
/*   Updated: 2023/01/26 16:35:57 by yizhang       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct nodes
{
	long			content;
	long			index;
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
	long	min;
	long	max;
	long	med;
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
void	link_add_top(t_data *all, char stack_name, t_node *new);
void	do_ra(t_data *all);
void	do_rb(t_data *all);
void	do_rr(t_data *all);
void	do_rra(t_data *all);
void	do_rrb(t_data *all);
void	do_rrr(t_data *all);
long	stack_len(t_node **top);
long	is_storted(t_data	*all);
void	less_than_5(t_data *all);
void	free_stack_a(t_data *all);
void	free_stack_b(t_data *all);
void	free_ptr(char **ptr);
void	free_all(t_data *all);
void	find_med(t_data *all, char stackname);
void	radix_sort(t_data *all);
void	less_than_100(t_data *all);
void	simple_nb(t_data *all);
void	checker(t_data *check);
void	see_the_stack(t_node **link);
char	*get_next_line(int fd);

int		ft_len_gnl(char *str, char c);
char	*ft_strdup_gnl(char *s);
char	*ft_strjoin_gnl(char *dst, char *src);
char	*ft_substr_gnl(char *store_str, int start, int len);
char	*ft_strchr_gnl(char *str, char c);

#endif
