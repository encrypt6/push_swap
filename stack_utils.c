/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:37:15 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/17 13:40:07 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
    if (!stack)
        return;
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

int	ft_max_val(t_stack *top)
{
	int	max = INT_MIN;

	while (top != NULL)
	{
		if (max < top->value)
			max = top->value;
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
	while (stack->next && stack->next->next)
		stack = stack->next;
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
