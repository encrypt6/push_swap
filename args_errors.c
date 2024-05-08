/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:48:30 by elsikira          #+#    #+#             */
/*   Updated: 2024/05/08 12:20:58 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_all_errors_create_nodes(t_stack **a, char **argv)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (ft_not_int_error(&argv[i]))
			ft_print_error_free(a);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_print_error_free(a);
		if (ft_dupplicates_error(*a, nbr))
			ft_print_error_free(a);
		ft_create_nodes(a, nbr);
		++i;
	}
}

int	ft_not_int_error(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_dupplicates_error(t_stack *a, int nbr)
{
	if (a == NULL) //if stack empty
		return (0);
	while (a)
	{
		if (a->value == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

void	ft_free_stack (t_stack **stack)
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

void ft_print_error_free(t_stack **a)
{
	ft_free_stack(a);
	write(2, "Error\n", 6);
	exit(0);
}

