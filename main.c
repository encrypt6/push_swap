/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/16 17:40:33 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

int	main(int argc, char *argv[])
{
	/*
	int	i;

	i = 0;
	if (argc == 1)
		return (0);
	else if (argc <= 2)
		print_error();
	else if (argc > 2)
	{
		if (ft_check_all_errors(argc, argv) == 1)
			print_error();
	}
}
*/
	struct s_node	*list;

	list = ft_make_list(argc, argv);
	ft_print_and_free_list(list);
	return (EXIT_SUCCESS);
}
