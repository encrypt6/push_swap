/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/26 17:32:11 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_sort_int_tab(int *tab, unsigned int size)
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
	return (tab);
}

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("\n");
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

void	ft_indexation(t_stack **a)
{
	int	*tab;
	int	size;
	int	i;

	size = ft_stack_size(*a);
	i = 0;
	tab = ft_sort_int_tab(ft_cpy_stack_to_tab(a, size), size);
	print_tab(tab, size);
	while ((*a))
	{
		while (tab[i])
		{
			if (tab[i] == (*a)->value)
			{
				(*a)->index = i;
				printf("%d\n", (*a)->index);
				break ;
			}
			else
				i++;
		}
		i = 0;
		(*a) = (*a)->next;
	}
	free(tab);
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

void	radix_sort(t_stack **a, t_stack **b)
{
	*b = NULL;
	ft_indexation(a);
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

//8" "78" "2" "5" "6" "9" "7"
