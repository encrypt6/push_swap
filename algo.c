/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/13 19:49:47 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if ((*a)->value < (*a)->next->value && (*a)->next->value > (*a)->next->next->value)
	{
		s
	}
}

void	ft_sort_two(t_stack **a)
{
	sa(a, PRINT);
}

void	sort_algo(t_stack **a)//, t_stack **b)
{
	if (stack_size(*a) == 2)
	{
		ft_sort_two(a);
	}
	else if (stack_size(*a) == 3)
	{
		ft_sort_three(a);
	}
}
