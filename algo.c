/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/07/09 12:06:37 by elsikira         ###   ########.fr       */
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

void	shortest_route(t_stack **a)
{
	t_stack	*tmp;
	int		ra_cost;
	int		rra_cost;

	tmp = *a;
	ra_cost = 0;
	rra_cost = 0;
	while (tmp->value != ft_min_val(*a))
	{
		tmp = tmp->next;
		ra_cost++;
	}
	rra_cost = ft_stack_size(*a) - ra_cost;
	if (ra_cost <= rra_cost)
	{
		while (ra_cost-- > 0)
			ra(a, PRINT);
	}
	else
	{
		while (rra_cost-- > 0)
			rra(a, PRINT);
	}
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	count;

	count = 0;
	while (count < 2)
	{
		shortest_route(a);
		pb(b, a, PRINT);
		count++;
	}
	sort_two_three(a);
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
