/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:19:09 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/11 19:07:16 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct	s_Node {
	int				data;
	struct s_Node	*next;
};

struct	s_Node	*create_node(int data)
{
	struct s_Node	*new_node;

	new_node = (struct s_Node *)malloc(sizeof(struct s_Node));
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

int	is_empty(struct Node *top)
{
	return (top == NULL);
}

void	push(struct Node **top, int data)
{
	struct s_Node	*new_node;

	new_node = create_node(data);
	new_node->next = *top;
	*top = new_node;
	printf("%d pushed to the stack.\n", data);
}

int	pop(struct s_Node **top)
{
	struct s_Node	*temp;
	int				popped;

	if (is_empty(*top))
	{
		printf("Stack underflow!\n");
		return (INT_MIN);
	}
	temp = top;
	popped = temp->data;
	*top = (*top)->next;
	free(temp);
	return (popped);
}

void	display_stack(struct Node *top)
{
	struct Node	*current;

	current = top;
	if (is_empty(top))
	{
		printf("Stack is empty!\n");
		return ;
	}
	printf("Stack: ");
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

int	main(void)
{
	struct Node	*top;

	top = NULL;
	push(&top, 10);
	push(&top, 20);
	push(&top, 30);
	displayStack(top);
	printf("%d popped from the stack.\n", pop(&top));
	display_stack(top);
	return (0);
}
