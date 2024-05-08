/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:15:24 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/07 17:18:13 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *a)
{
	int	temp;

	if (a == NULL || a->next == NULL)
		return ;
	else
	{
		temp = a->value;
		a->value = a->next->value;
		a->next->value = temp;
	}
}
