/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:48:30 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/19 13:28:55 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* functions to handle errors
   

                            */
int	ft_check_errors(t_stack_node *a[], char *argv[])
{
	long	x;

	while (argv[])
	{
		x = ft_atol(argv[]);
		if (ft_not_int_error(a[], (int)x))
			ft_print_error_free();
		if (x > INT_MAX || x < INT_MIN)
			ft_print_error_free();
		if (ft_dupplicates_error(a[], (int)x))
			ft_print_error_free();
	}
	return (0);
}

int	ft_not_int_error(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
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

int	ft_dupplicates_error(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_print_error_free(void)
{
	ft_free_stack(a);
	write(2, "Error\n", 6);
	return(1);
}
