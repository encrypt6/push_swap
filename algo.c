/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/25 18:24:28 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_index_to_stack(t_stack *a, int index_array[], int	array_size)
{
}
void	ft_sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	print_array(int array[], int size)
{
	int	i = 0;
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	printf("\n");
}

void	ft_cpy_stack_to_array(t_stack *a) 
{
	print_array(array, size);
	ft_sort_int_tab(array, *size); 
	print_array(array, size);
    ft_get_index(array, index_array, *array_size); // Calculate indices of sorted int tab
}

void	radix_sort(t_stack **a, t_stack **b)
{
	while ((stack_size - 1) >> bit != 0)
		bit++;
	while (i < bit)
	{
		j = 0;
		while (j < stack_size)
		{
			if ((((*a)->index >> i) & 1) == 1)
				ra(a, PRINT);
			else
				pb(b, a, PRINT);
		}
		while (b != NULL)
			pa(a, b, PRINT);
		i++;
	}
}

void	sort_two_three(t_stack **a)
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
		if (ft_stack_size(*a) <= 3)
			sort_two_three(a);
		else 
			radix_sort(a, b);
	}
}


//radix : consists in sorting from least significant digit to most significant digit. 10 boxes for 0 1 2 3 4 5 6 7 8 9, but instead we will use box 1 and box 0, because we only have two stacks.
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
