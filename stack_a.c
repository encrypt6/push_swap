/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:37:31 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/11 17:18:10 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct s_Node{
	int			data;
	struct Node	*next;
};

struct s_Node* createNode(int data) { 
	struct s_Node* newNode = (struct s_Node*)malloc(size of(struct s_Node));
	s_newNode->data = data;
	s_newNode->data = NULL;
	return (s_newNode);
}

int	isEmpty(struct Node *top) 
{
	return top == NULL;
}

void	push(struct Node **top, int data)
{
	struct s_Node *newNode = createNode(data);
	s_newNode->next = *top;
	*top = s_newNode;
	ft_printf("%d pushed to the stack\n", data);
}

int	pop(struct s_Node** top) 
{ 
    if (isEmpty(*top))
	{
       ft_printf("Stack underflow!\n"); 
        return INT_MIN; 
    } 
    struct s_Node* temp = *top; 
    int popped = temp->data; 
    *top = (*top)->next; 
    free(temp); 
    return popped; 
}

void	printLinkedList(struct s_Node *top)
{
	if (isEmpty(top))
	{
		ft_printf("Stack is empty\n");
		return;
	}
	struct s_Node	*current = top;
	ft_printf("Stack : ");
	while (current != NULL)
	{
		ft_printf("%d", current-> data);
		current = current ->next;
	}
	ft_printf("\n");
}

int	main()
{
	// Initialize nodes
  struct s_Node *top = NULL;

  push(&top, 10);
  push(&top, 20);
  push(&top, 30);
  printLinkedList(top);
  ft_printf("%d popped from the stack\n", pop(&top));
  printLinkedList(top);
  return (0);
}
