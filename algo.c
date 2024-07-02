/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/07/02 18:51:03 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b)
{
	int	bit_pos;
	int	msb;
	int	size_a;

	ft_indexation(a, 0);
	size_a = ft_stack_size(*a);
	msb = ft_get_msb(size_a - 1);
	bit_pos = 0;
	while (bit_pos <= msb)
	{
		ft_ra_or_pb(a, b, bit_pos);
		ft_rb_or_pa(a, b, bit_pos, msb);
		bit_pos++;
	}
	while (*b)
		pa(a, b, PRINT);
}

void	sort_two_three(t_stack **a)
{
	int	max_val;

	max_val = ft_max_val(*a);
	if ((*a)->value == max_val)
		ra(a, PRINT);
	else if ((*a)->next->value == max_val)
		rra(a, PRINT);
	if ((*a)->value > (*a)->next->value)
		sa(a, PRINT);
}
