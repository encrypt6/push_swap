/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/09 11:50:08 by elsikira         ###   ########.fr       */
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
	print_stack(a);
    /*if (!ft_checksort)
        ft_sort_algo(&a);*/
	ft_free_stack(&a);
	ft_free_stack(&b);

	return (EXIT_SUCCESS);
}
