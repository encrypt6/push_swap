/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:37:15 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/12 17:22:39 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_stack *a, t_stack *b)
{
	t_stack	*current;

	current = a;
	if (!a)
		return (0);
	while (current->next)
	{
		if (current->value < current->next->value)
		{
			current = current->next;
		}
		else
			return (0);
	}
	if (b == NULL)
		return (1);
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

t_stack *ft_stack_secondlast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next->next)
		stack = stack->next->next;
	return (stack);
}

int	stack_size(t_stack *stack)
{
	int	i;
	
	i = 0;
	while(stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
