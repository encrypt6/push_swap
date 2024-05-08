/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:47:36 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 20:11:03 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b, int print)
{
	t_list	*temp;

	if (!*a)
		return ;
	temp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = temp;
	if (print == PRINT)
		ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b, int print)
{
	t_list	*temp;

	if (!*b)
		return ;
	temp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = temp;
	if (print == PRINT)
		ft_printf("pb\n");
}
