/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/07/05 12:04:54 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**args;

	a = NULL;
	b = NULL;
	args = manage_args(argc, argv);
	ft_check_all_errors_create_nodes(&a, args);
	if (ft_is_sorted(a) == 1)
	{
		if ((a == NULL) || (a->next == NULL))
			exit(1);
		else
		{
			if (ft_stack_size(a) <= 3)
				sort_two_three(&a);
			else
				radix_sort(&a, &b);
		}
	}
	ft_free_stack(&a);
	ft_free_stack(&b);
	free_split(args);
	return (EXIT_SUCCESS);
}
