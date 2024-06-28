/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/28 17:08:36 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**args;

	a = NULL;
	b = NULL;
	args = manage_args(argc, argv);
	ft_check_all_errors_create_nodes(&a, args);
	if (ft_issorted(a) == 1)
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
