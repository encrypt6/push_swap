/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:02:24 by elsikira          #+#    #+#             */
/*   Updated: 2024/07/02 14:27:50 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i] != NULL)
	{
		if (argv[i] != NULL)
		{
			free(argv[i]);
			argv[i] = NULL;
		}
		i++;
	}
	free(argv);
}

void	ft_free_stack(t_stack **stack)
{
	t_stack	*current;
	t_stack	*tmp;

	if (stack == NULL)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	ft_print_error_free(t_stack **a, char **argv)
{
	ft_free_stack(a);
	ft_free_argv(argv);
	write(2, "Error\n", 6);
	exit(1);
}
