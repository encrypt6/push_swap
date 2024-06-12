/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/12 22:15:31 by elsikira         ###   ########.fr       */
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
	t_stack *a;
	t_stack *b;
	char	**args;

	a = NULL;
	b = NULL;
	args = manage_args(argc, argv);
	ft_check_all_errors_create_nodes(&a, args);
   	if (ft_issorted(a) == 1)
	{
		printf("Not sorted\n");
		sort_algo(&a, &b);
	}
	else
		return (EXIT_SUCCESS);
	print_stack(a);
	print_stack(b);
	//ft_free_all();
	ft_free_stack(&a);
	free_split(args);

	return (EXIT_SUCCESS);
}
