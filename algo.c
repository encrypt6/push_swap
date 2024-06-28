/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/28 19:55:32 by elsikira         ###   ########.fr       */
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

void	ft_indexation(t_stack **a, int i)
{
	int		*tab;
	int		size;
	t_stack	*head;

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

int	ft_get_msb(int nbr)
{
	int	msb;

	msb = 0;
	if (nbr == 0)
		return (0);
	nbr = nbr / 2;
	while (nbr != 0)
	{
		nbr = nbr / 2;
		msb++;
	}
	return (msb);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	bit_pos;
	int	msb;
	int	size_a;
	int	size_b;
	int	i;

	ft_indexation(a, 0);
	size_a = ft_stack_size(*a);
	msb = ft_get_msb(size_a - 1);
	bit_pos = 0;
	while (bit_pos <= msb)
	{
		i = 0;
		size_a = ft_stack_size(*a);
		while (i < size_a)
		{
			if ((((*a)->index >> bit_pos) & 1))
				ra(a, PRINT);
			else
				pb(b, a, PRINT);
			i++;
		}
		i = 0;
		size_b = ft_stack_size(*b);
		while (i < size_b)
		{
			if ((((*b)->index >> (bit_pos + 1)) & 1) || (bit_pos == msb)) 
				pa(a, b, PRINT);
			else
				rb(b, PRINT);
			i++;
		}
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
