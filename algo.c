/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/26 15:33:35 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	print_tab(int *tab, int	size)
{
	int	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	printf("\n");
}

int	*ft_cpy_stack_to_tab(t_stack **a, int size) 
{
	int	i;
	int	*tab;
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
	//ft_sort_int_tab(tab, size); 
	return (tab);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	*tab;
	int	size;

	*b = NULL;
	size = ft_stack_size(*a);
	tab = ft_cpy_stack_to_tab(a, size);
	print_tab(tab, size);
	ft_sort_int_tab(tab, size);
	print_tab(tab, size);
	/*while ((stack_size - 1) >> bit != 0)
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
	}*/
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
	*b = NULL;
	if ((*a) == NULL || (*a)->next == NULL)
		exit(1);
	else
	{
		if (ft_stack_size(*a) <= 3)
			sort_two_three(a);
		else
		{
			radix_sort(a, b);
		}
	}
}
