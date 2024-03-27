/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:56:45 by elsikira          #+#    #+#             */
/*   Updated: 2024/03/27 12:30:40 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"
#include "libft/libft.h"

int	ft_not_int_error(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while(argv[j] != NULL)
		{
			if (!ft_isdigit(argv[i][j] && argv[i][j] != '-'))
					return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*int	ft_bigger_than_int_error(int argc, char *argv[])
{

}

int	ft_dupplicates_error(int argc, char *argv[])
{
	
}*/

int	ft_check_all_errors(int argc, char *argv[])
{
	if (ft_not_int_error(argc, argv))
		return (1);
	/*if (ft_bigger_than_int_error(argc, argv))
		return (1);
	if (ft_dupplicates_error(argc, argv))
		return (1);*/
	return (0);
}
