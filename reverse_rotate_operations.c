/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:26:24 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 16:32:23 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*second_last;
	second_last = *a;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	second_last->next->next = *a;
	*a = second_last->next;
	second_last->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*second_last;
	second_last = *b;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	second_last->next->next = *b;
	*b = second_last->next;
	second_last->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
