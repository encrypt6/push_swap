/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 15:30:39 by elsikira          #+#    #+#             */
/*   Updated: 2024/07/03 13:29:57 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_or_pb(t_stack **a, t_stack **b, int bit_pos)
{
	int	i;
	int	size_a;

	i = 0;
	size_a = ft_stack_size(*a);
	while (i < size_a)
	{
		if ((ft_is_reverse_sorted(*b) == 0) && (ft_is_sorted(*a) == 0))
			break ;
		if ((((*a)->index >> bit_pos) & 1))
			ra(a, PRINT);
		else if ((((*a)->index >> bit_pos) & 1) == 0)
			pb(b, a, PRINT);
		i++;
	}
}

void	ft_rb_or_pa(t_stack **a, t_stack **b, int bit_pos, int msb)
{
	int	i;
	int	size_b;

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
		i = 0;
		while (i < size)
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
