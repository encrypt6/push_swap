/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:15:24 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 19:16:54 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, int print)
{
	int	temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = temp;
	if (print == PRINT)
		ft_printf("sb\n");
}

void	sb(t_stack **b, int print)
{
	int	temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = (*b)->value;
	(*b)->value = (*b)->next->value;
	(*b)->next->value = temp;
	if (print == PRINT)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, int print)
{
	if (!a || !b)
		return ;
	sa(a, DONT_PRINT);
	sb(b, DONT_PRINT);
	if (print == PRINT)
		ft_printf("ss\n");
}
