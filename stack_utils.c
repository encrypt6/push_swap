/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:37:15 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 21:08:23 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacklast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack *ft_stack_secondlast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next->next)
		stack = stack->next->next;
	return (stack);
}
