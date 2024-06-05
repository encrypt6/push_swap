/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/05 19:45:31 by elsikira         ###   ########.fr       */
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
	char		**args;

	a = NULL;
	b = NULL;
	args = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args)
			return (1);
		ft_check_all_errors_create_nodes(&a, args);
	}
	else
		ft_check_all_errors_create_nodes(&a, argv + 1);
	print_stack(a);
	/*if (!ft_checksort)
		ft_sort_algo(&a);*/

	ft_free_stack(&a);
	ft_free_stack(&b);
	return (EXIT_SUCCESS);
}
