/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:56:45 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/04 01:56:25 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	ft_overunderflow_error(int argc, char *argv[])
{
	int		i;
	long	x;

	i = 1;
	while (i < argc)
	{
		x = ft_atol(argv[i]);
		if (x > INT_MAX)
			return (1);
		if (x < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	ft_dupplicates_error(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		int	j;
		j = i + 1;
		while (j < argc)
		{
			if (argv[i] == argv[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_all_errors(int argc, char *argv[])
{
	if (ft_not_int_error(argc, argv))
		return (1);
	if (ft_overunderflow_error(argc, argv))
		return (1);
	if (ft_dupplicates_error(argc, argv))
		return (1);
	return (0);
}
