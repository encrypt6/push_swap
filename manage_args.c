/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:55:11 by elsikira          #+#    #+#             */
/*   Updated: 2024/07/05 17:33:29 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*concat_args(int argc, char **argv)
{
	int		i;
	int		len;
	char	*result;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		if (i < argc - 1)
			len++;
		i++;
	}
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		exit(EXIT_FAILURE);
	result[0] = '\0';
	i = 0;
	while (++i < argc)
	{
		ft_strcat(result, argv[i]);
		if (i < argc - 1)
			ft_strcat(result, " ");
	}
	return (result);
}

char	**manage_args(int argc, char **argv)
{
	int		i;
	char	*concatenated_args;
	char	**splitted_args;

	i = 1;
	if (argc < 2)
		exit(EXIT_FAILURE);
	while (i < argc)
	{
		if (argv[i][0] == '\0' || ft_isempty(argv[i]))
		{
			write(1, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	concatenated_args = concat_args(argc, argv);
	if (!concatenated_args)
		exit(EXIT_FAILURE);
	splitted_args = ft_split(concatenated_args, ' ');
	free(concatenated_args);
	if (!splitted_args)
		exit(EXIT_FAILURE);
	return (splitted_args);
}
