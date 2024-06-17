/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/17 17:20:45 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cpy_stack_to_array(t_stack *a, int array[], int *array_size)
{
	t_stack	*current;
	*array_size = 0;

	current = a;
	while (current != NULL)
	{
		array[*array_size] = current->value;
		(*array_size)++;
		current = current->next;
	}


}

void	ft_radix_sort(t_stack **a, t_stack **b)
{
	t_stack	*current;
	current = a;

	ft_cpy_stack_to_array(*a, array, &array_size);
	ft_sort_int_tab(
}

void	ft_sort_two_three(t_stack **a)
{
	int	max_val;

	max_val = ft_max_val(*a);

	if ((*a)->value == max_val)
		ra(a, PRINT);
	else if ((*a)->next->value == max_val)
		rra(a, PRINT);
	if ((*a)->value > (*a)->next->value)
		sa(a, PRINT);
}

void	sort_algo(t_stack **a, t_stack **b)
{
	if ((*a) == NULL || (*a)->next == NULL)
		exit(1);
	else
	{
		if (stack_size(*a) <= 3)
			ft_sort_two_three(a);
		else 
			ft_radix_sort(a, b);
	}
}
