/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 15:49:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/03/29 16:16:31 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

/* TO DO LIST 

   For Errors, create a function that will check argc value,
   create a function that will parse every argv[i] strings for invalid characters (#isdigit && len <= INT_MAX len) INT_MAX == 2147483647 len == 9 if nb = 12345678910111213 len(nb) > len(INT_MAX) >> Overflow guaranteed (noneed to check after atoll)

   je vais t'envoyer un screenshot d'un enum a declarer dans ton .h et une fonction qui te servira pour stocker tes messages d'erreurs.
   */

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	
	if (argc <= 2)
		return (write(2, "Error\n", 6));
	else if (argc > 2)
	{
		if (ft_check_all_errors(argc, argv) == 1)
			return(write(2, "Error\n", 6));
	}
}
