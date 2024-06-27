/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:26:24 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/27 20:04:55 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int print)
{
	t_stack	*second_last;
	t_stack	*last;

	second_last = ft_stack_secondlast(*a);
	last = second_last->next;
	if (*a == NULL || (*a)->next == NULL || last == NULL)
		return ;
	last->next = *a;
	second_last->next = NULL;
	*a = last;
	if (print == PRINT)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, int print)
{
	t_stack	*second_last;
	t_stack	*last;

	second_last = ft_stack_secondlast(*b);
	last = second_last->next;
	if (*b == NULL || (*b)->next == NULL || last == NULL)
		return ;
	last->next = *b;
	second_last->next = NULL;
	*b = last;
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
