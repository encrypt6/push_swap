/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:54:06 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 16:51:52 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
}t_stack;

int					main(int argc, char **argv);
void				ft_check_all_errors_create_nodes(t_stack **a, char **argv);
int					ft_not_int_error(char **argv);
int					ft_dupplicates_error(t_stack *a, int nbr);
void				ft_print_error_free(t_stack **a);
void				ft_free_stack(t_stack **stack);

t_stack				*ft_get_prev_node(t_stack *head);
void				ft_create_nodes(t_stack **a, int nbr);

void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
#endif
