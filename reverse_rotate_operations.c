/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:26:24 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 21:09:11 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int print)
{
	t_stack	*second_last;
	second_last = ft_stack_secondlast(*a);

	if (*a == NULL || (*a)->next == NULL)
		return ;
	second_last->next->next = *a;
	*a = second_last->next;
	second_last->next = NULL;
	if (print == PRINT)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, int print)
{
	t_stack	*second_last;
	second_last = ft_stack_secondlast(*b);

	if (*b == NULL || (*b)->next == NULL)
		return ;
	second_last->next->next = *b;
	*b = second_last->next;
	second_last->next = NULL;
	if (print == PRINT)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, int print)
{
	if (!a || !b)
		return ;
	rra(a, DONT_PRINT);
	rrb(b, DONT_PRINT);
	if (print == PRINT)
		ft_printf("rrr\n");
}
