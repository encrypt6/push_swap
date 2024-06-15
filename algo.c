/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/15 18:06:23 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ft_sort_three(t_stack **a)
{
	
}*/

void	ft_sort_two_three(t_stack **a)
{
		if (stack_size(*a) == 2)
			sa(a, PRINT);
		else if (stack_size(*a) == 3)
		{
			if ((*a)->value > (*a)->next->value && (*a)->next->value < (*a)->next->next->value && (*a)->value < (*a)->next->next->value)
				sa(a, PRINT);
			else if ((*a)->value > (*a)->next->value && (*a)->next->value < (*a)->next->next->value && (*a)->value > (*a)->next->next->value)
				ra(a, PRINT);
			else if ((*a)->value < (*a)->next->value && (*a)->next->value > (*a)->next->next->value && (*a)->value < (*a)->next->next->value)
			{
				sa(a, PRINT);
				ra(a, PRINT);
			}

		}

}

void	sort_algo(t_stack **a)//, t_stack **b)
{
	if ((*a) == NULL || (*a)->next == NULL)
		exit(1);
	else
	{
		if (stack_size(*a) <= 3)
			ft_sort_two_three(a);
		else if (stack_size(*a) >= 4 && stack_size(*a) <= 5)
		{

		}
	}
}
