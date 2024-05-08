/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 16:49:13 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack		*a;

	a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	ft_check_all_errors_create_nodes(&a, argv + 1);
	++argv;
	//ft_sort_algo
	/*while(*argv)
	{
		printf("%d ", ft_atoi(*argv));
		++argv;
	}
	//sa(a);
	//ra(&a);
	//rra(&a);
	printf("\n");
	while (a) 
	{
        printf("%d ", a->value);
        a = a->next;
    }*/
	ft_free_stack(&a);
	return (EXIT_SUCCESS);
}
