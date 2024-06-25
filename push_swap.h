/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:54:06 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/25 12:58:20 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

# define PRINT 1
# define DONT_PRINT 0

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}t_stack;

int					main(int argc, char **argv);

//args type management
char				**manage_args(int argc, char **argv);
char    			*concat_args(int argc, char **argv);

//args errors management
void				ft_check_all_errors_create_nodes(t_stack **a, char **argv);
int					ft_not_int_error(char *arg);
int					ft_dupplicates_error(t_stack *a, int nbr);
void				ft_print_error_free(t_stack **a);
void				ft_free_stack(t_stack **stack);

t_stack				*ft_get_prev_node(t_stack *head);
void				ft_create_nodes(t_stack **a, int nbr);

//mooves
void				sa(t_stack **a, int print);
void				sb(t_stack **b, int print);
void				ss(t_stack **a, t_stack **b, int print);
void				ra(t_stack **a, int print);
void				rb(t_stack **b, int print);
void				rr(t_stack **a, t_stack **b, int print);
void				rra(t_stack **a, int print);
void				rrb(t_stack **b, int print);
void				rrr(t_stack **a, t_stack **b, int print);
void				pa(t_stack **a, t_stack **b, int print);
void				pb(t_stack **b, t_stack **a, int print);

//stack utils
t_stack				*ft_stacklast(t_stack *stack);
t_stack 			*ft_stack_secondlast(t_stack *stack);
int					ft_issorted(t_stack *a);
int					ft_stack_size(t_stack *stack);
void				ft_minvalue(t_stack **a, t_stack **b);
void				print_stack(t_stack *stack);
int					ft_max_val(t_stack *top);

//sort algorithm
void				sort_algo(t_stack **a, t_stack **b);

#endif
