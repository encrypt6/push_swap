/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:41:27 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 19:26:06 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int print)
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
	if (print == PRINT)
		ft_printf("ra\n");
}

void	rb(t_stack **b, int print)
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
	if (print == PRINT)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, int print)
{
	if (!a || !b)
		return ;
	ra(a, DONT_PRINT);
	rb(b, DONT_PRINT);
	if (print == PRINT)
		ft_printf("rr\n");
}
