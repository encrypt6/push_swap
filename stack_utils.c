/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:37:15 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/27 20:07:21 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_val(t_stack *top, int field)
{
	int	max;

	max = INT_MIN;
	while (top != NULL)
	{
		if (field == 0)
		{
			if (max < top->value)
				max = top->value;
		}
		else
		{
			if (max < top->index)
				max = top->index;
		}
		top = top->next;
	}
	return (max);
}

int	ft_issorted(t_stack *a)
{
	t_stack	*current;

	current = a;
	if (!a)
		return (EXIT_FAILURE);
	while (current->next)
	{
		if (current->value < current->next->value)
		{
			current = current->next;
		}
		else
			return (1);
	}
	return (0);
}

t_stack	*ft_stacklast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*ft_stack_secondlast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next && stack->next->next)
		stack = stack->next;
	return (stack);
}

int	ft_stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
