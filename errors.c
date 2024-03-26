/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:56:45 by elsikira          #+#    #+#             */
/*   Updated: 2024/03/26 17:02:47 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_check_all_errors(int argc, char *argv[])
{
	if (ft_not_int_error(argc, argv))
		return (1);
	if (ft_bigger_than_int(argc, argv))
		return (1);
	if (ft_dupplicates(argc, argv))
		return (1);
}
