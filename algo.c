/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/19 23:31:15 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	print_array(int array[], int size)
{
	int	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
}

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
	print_array(array, *array_size);
	ft_sort_int_tab(array, *array_size); 
	print_array(array, *array_size);
}

void	ft_radix_sort(t_stack **a)//, t_stack **b)
{
	int	stack_size;
	stack_size = ft_stack_size(*a);
	int	array[stack_size];


	ft_cpy_stack_to_array(*a, array, &stack_size);
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

void	sort_algo(t_stack **a)//, t_stack **b)
{
	if ((*a) == NULL || (*a)->next == NULL)
		exit(1);
	else
	{
		if (ft_stack_size(*a) <= 3)
			ft_sort_two_three(a);
		else 
			ft_radix_sort(a);//, b);
	}
}


//radiz : consists in sorting from least significant digit to most significant digit. 10 boxes for 0 1 2 3 4 5 6 7 8 9, but instead we will use box 1 and box 0, because we only have two stacks.
//first, we have to copy the stack a into a tab, and sort it. 
// exemple : 9 3 7 26 15. will become 3 7 9 15 26.
//second, we get the index of the stack sorted :
// 3 = 0
// 7 = 1
// 9 = 2
// 15 = 3
// 26 = 4.
//then we put it normally like before : 2 0 1 4 3.
// third, we sort this via the first bit of the number. if it's set at 0, we push it to b. if it is set at 1, we keep it in a. 
// exemple : 2 is 0000 0010 in binary. the first bit is set at 0 so we push it to b.
// fourth : we push all stack b back to a, and restart the same process but at the second bit, etc etc...
