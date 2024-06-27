/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/27 20:11:43 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_cpy_stack_to_tab(t_stack **a, int size)
{
	int		i;
	int		*tab;
	t_stack	*temp;

	i = 0;
	tab = malloc(sizeof(int) * size);
	temp = *a;
	if (!tab)
		return (NULL);
	while (temp != NULL)
	{
		tab[i] = temp->value;
		temp = temp->next;
		i++;
	}
	return (tab);
}

void	ft_indexation(t_stack **a)
{
	int		i;
	int		*tab;
	int		size;
	t_stack	*head;

	i = 0;
	size = ft_stack_size(*a);
	tab = ft_sort_int_tab(ft_cpy_stack_to_tab(a, size), size);
	head = *a;
	while ((*a))
	{
		while (tab[i])
		{
			if (tab[i] == (*a)->value)
			{
				(*a)->index = i;
				break ;
			}
			else
				i++;
		}
		i = 0;
		(*a) = (*a)->next;
	}
	free(tab);
	*a = head;
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	bit_pos;
	int	max_bit;
	int	size;
	int	i;

	size = ft_stack_size(*a);
	max_bit = 31;
	bit_pos = 0;
	ft_indexation(a);
	while (bit_pos <= max_bit)
	{
		i = 0;
		while (i < size)
		{
			if ((((*a)->index >> bit_pos) & 1))
				pb(b, a, PRINT);
			else
				ra(a, PRINT);
			i++;
		}
		while (*b)
			pa(a, b, PRINT);
		bit_pos++;
	}
}

void	sort_two_three(t_stack **a)
{
	int	max_val;

	max_val = ft_max_val(*a, 0);
	if ((*a)->value == max_val)
		ra(a, PRINT);
	else if ((*a)->next->value == max_val)
		rra(a, PRINT);
	if ((*a)->value > (*a)->next->value)
		sa(a, PRINT);
}
