/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:37:15 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/11 18:27:58 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isempty(t_stack *b)
{
	t_stack *current;

	current = b;
	if (b == NULL)
		return (0);
	else
		return (1);
}

int	ft_issorted(t_stack *a, t_stack *b)
{
	t_stack	*current;

	current = a;
	if (!a)
		return (EXIT_FAILURE);
	if (ft_isempty(b) == 1)
		return (EXIT_FAILURE);
	while (current->next)
	{
		if (current->value < current->next->value)
		{
			current = current->next;
		}
		else
			return (1); //not sorted
	}
	return (0); //sorted
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
