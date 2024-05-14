/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/14 19:08:44 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_stack *stack)
{
	if (!stack)
		return ;
	while (stack)
	{
		printf("%d ", stack->value);
		stack = stack->next;
	}
	printf("%s", "\n");
}

int	main(int argc, char *argv[])
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	ft_check_all_errors_create_nodes(&a, argv + 1);
	++argv;
	//ra(&a, PRINT);
	ft_minvalue(&a, &b);
	//pb(&b, &a, PRINT);
	//t = a;
	printf("a: ");
	print_stack(a);
	printf("b: ");
	print_stack(b);
	
	//sort
	//checksort
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (EXIT_SUCCESS);
}
