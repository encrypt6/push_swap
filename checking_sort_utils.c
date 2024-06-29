/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_sort_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:43:42 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/29 16:46:24 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_reverse_sorted(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	if (!stack)
		return (EXIT_FAILURE);
	while (current->next)
	{
		if (current->value > current->next->value)
			current = current->next;
		else
			return (1);
	}
	return (0);
}

int	ft_is_sorted(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	if (!stack)
		return (EXIT_FAILURE);
	while (current->next)
	{
		if (current->value < current->next->value)
			current = current->next;
		else
			return (1);
	}
	return (0);
}
