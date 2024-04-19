/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/19 12:25:47 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	if (argc == 1 || argc == 2 && !argv[1][0])
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	//ft_init_stack(
	if (argc > 2)
	{
		if (ft_check_all_errors(argc, argv) == 1)
			print_error();
		else
		{
			list = ft_make_list(argc, argv);
			ft_print_and_free_list(list);
			return (EXIT_SUCCESS);
		}
	}
}
