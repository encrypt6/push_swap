/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:48:30 by elsikira          #+#    #+#             */
/*   Updated: 2024/07/02 14:38:55 by elsikira         ###   ########.fr       */
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
		if (ft_not_int_error(argv[i]) || nbr > INT_MAX || nbr < INT_MIN)
			ft_print_error_free(a, argv);
		if (ft_dupplicates_error(*a, nbr))
			ft_print_error_free(a, argv);
		++i;
		ft_create_nodes(a, nbr);
	}
}

int	ft_not_int_error(char *arg)
{
	long int	i;

	i = 0;
	if ((arg[i] == '-' || arg[i] == '+' ) && arg[i + 1] != '\0')
		i++;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_dupplicates_error(t_stack *a, int nbr)
{
	t_stack	*temp;

	temp = a;
	if (temp == NULL)
		return (0);
	while (temp)
	{
		if (temp->value == nbr)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	ft_create_nodes(t_stack **a, int nbr)
{
	t_stack	*node;
	t_stack	*head;

	if (a == NULL)
		return ;
	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->value = nbr;
	if (*a == NULL)
	{
		*a = node;
	}
	else
	{
		head = *a;
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = node;
	}
}
