/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:56:45 by elsikira          #+#    #+#             */
/*   Updated: 2024/03/29 17:55:31 by elsikira         ###   ########.fr       */
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
			if (!ft_isdigit(argv[i][j]) && (argv[i][j] != '-' || argv[i][j] != '+'))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_bigger_than_int_error(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		long long int	num;

		num = atoll(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

/*int	ft_dupplicates_error(int argc, char *argv[])
{
	
}*/

/*int	ft_printf(char *format, ...);
int	ft_dprintf(int fd, char *format, ...); // fd = 2 = STDERR;
void	ft_putendl_fd(char *str); // "ERROR"*/

int	ft_check_all_errors(int argc, char *argv[])
{
	if (ft_not_int_error(argc, argv))
		return (1);
	if (ft_bigger_than_int_error(argc, argv))
		return (1);
	/*if (ft_dupplicates_error(argc, argv))
		return (1);*/
	return (0);
}
