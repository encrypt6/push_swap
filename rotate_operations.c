/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:41:27 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 16:30:55 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*last;
	last = *a;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	while (last->next != NULL)
			last = last->next;
	last->next = *a;
	*a = (*a)->next;
	last->next->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	t_stack	*last;
	last = *b;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	while (last->next != NULL)
			last = last->next;
	last->next = *b;
	*b = (*b)->next;
	last->next->next = NULL;
	write(1, "rb\n", 3);
}


void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
