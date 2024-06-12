/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/12 22:17:55 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_half_to_b(t_stack **a, t_stack **b)
{
	int	i;
	int	half_size;

	i = 0;
	half_size = stack_size(*a) / 2;
	while (i < half_size)
	{
		pb(b, a, PRINT);
		i++;
	}
}

void	sort_algo(t_stack **a, t_stack **b)
{
	int	size_a;

	size_a = stack_size(*a);
	if (size_a > 3)
	{
		push_half_to_b(a, b);
	}
}
