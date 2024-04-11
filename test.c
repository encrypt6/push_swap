/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:19:09 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/11 18:29:02 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct	s_Node {
	int				data;
	struct s_Node	*next;
};

struct	s_Node	*create_node(int data)
{
	struct	s_Node	*new_node = (struct s_Node*)malloc(sizeof(struct s_Node)); 
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

int is_empty(struct Node* top)
{ 
	return top == NULL;
}

void	push(struct Node** top, int data)
{
    struct Node* newNode = createNode(data); 
    newNode->next = *top; 
    *top = newNode; 
    printf("%d pushed to the stack.\n", data); 
}

int	pop(struct Node** top)
{
    if (isEmpty(*top)) 
	{
		printf("Stack underflow!\n");
		return INT_MIN; 
    }
	struct Node* temp = *top;
	int popped = temp->data;
	*top = (*top)->next;
	free(temp);
	return popped;
}

// Function to display the stack 
void	displayStack(struct Node* top) 
{
	if (isEmpty(top)) 
	{
		printf("Stack is empty!\n");
		return;
    } 
    struct Node	*current = top;
    printf("Stack: ");
    while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
    }
	printf("\n"); 
}

int main() 
{ 
    struct Node	*top = NULL;
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    displayStack(top);
    printf("%d popped from the stack.\n", pop(&top));
    displayStack(top);
    return (0);
}
