/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/11 18:46:12 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_stack *stack)
{
    if (!stack)
        return;
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
	t_stack *a;
    t_stack *b;
	char	**args;

	a = NULL;
	b = NULL;
	args = manage_args(argc, argv);
	ft_check_all_errors_create_nodes(&a, args);
	printf("Stack a is :");
	print_stack(a);
	printf("Stack b is :\n");
	print_stack(b);
//	pb(&b, &a, PRINT);
    if (ft_issorted(a, b) == 1)
	{
        printf("Not sorted or B not empty\n");
	}
	else if (ft_issorted(a, b) == 0)
		printf("Sorted\n");
	//else if (ft_issorted(a, b) == 0)
		//printf("B not empty, cannot check the sort of a\n");
	printf("Stack a is :");
	print_stack(a);
	printf("Stack b is :");
	print_stack(b);
	ft_free_stack(&a);
	ft_free_stack(&b);

	return (EXIT_SUCCESS);
}
