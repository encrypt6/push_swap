/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:54:06 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/19 12:01:16 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct	s_stack_node
{
	int					value;
	int					position;
	int					index;
	int					push;
	int					lowest;
	int					above_median;
	struct s_stack_node	*target;
	struct s_stack_node	*next;
	struct s_stack_node	*previous;
}t_stack_node;

int				main(int argc, char *argv[]);
int				ft_check_all_errors(int argc, char *argv[]);
int				ft_not_int_error(int argc, char *argv[]);
int				ft_dupplicates_error(int argc, char *argv[]);
void			print_error(void);

t_node   		*ft_make_list(int argc, char *argv[]);
void			ft_print_and_free_list(t_node *list_a);

#endif
