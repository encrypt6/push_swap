/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04i/16 16:29:22 by elsikira          #+#    #+#            */
/*   Updated: 2024/04/23 18:37:54 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_get_prev_node(t_stack *head)
{
	if (head == NULL)
		return (NULL);
	while (head->next)
		head = head->next;//while pointing to next, the previous node is head
	return (head);
}

void	ft_create_node(t_stack **a, int nbr)
{
	t_stack	*node;
	t_stack	*prev_node;

	if (a == NULL) // if s
		return ;
	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return ;
	node->next = NULL; // the new node points to NULL
	node->value = nbr; // value is the nbr passed
	if (*a == NULL) // if stack is empty
	{
		*a = node;
		node->prev = NULL; //pointer to prev is NULL
	}
	else // linking nodes
	{
		prev_node = ft_get_prev_node(*a); //searches for the previous node in the stack
		prev_node->next = node; //previous pointing to next node becomes node
		node->prev = prev_node; //node pointing to previous becomes previous node
	}
}
