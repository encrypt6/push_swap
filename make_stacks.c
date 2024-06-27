/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:29:22 by elsikira          #+#    #+#            */
/*   Updated: 2024/06/27 19:53:48 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_create_nodes(t_stack **a, int nbr)
{
	t_stack	*node;
	t_stack	*head;

	if (a == NULL)
		return ;
	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = nbr;
	if (*a == NULL)
	{
		*a = node;
	}
	else
	{
		head = *a;
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = node;
	}
}
