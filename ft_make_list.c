/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:29:22 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/16 17:42:55 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct t_node	*ft_make_list(int argc, char *argv[])
{
	struct t_node	*list;
	struct t_node	*end;
	struct t_node	*ptr_node;
	int		i;

	list = NULL;
	end = NULL;
	i = 1;
	while (i < argc)
	{
		ptr_node = malloc(sizeof(*list));
		ptr_node->content = malloc(ft_strlen(argv[i] + 1));
		ft_strcpy(ptr_node->content, argv[i]);
		ptr_node->next = NULL;
		if (list == NULL)
		{
			list = ptr_node;
			end = ptr_node;
		}
		else
		{
			end->next = ptr_node;
			end = ptr_node;
		}
		i++;
	}
	return (list);
}

void	ft_print_and_free_list(struct t_node *list)
{
	struct t_node	*run;

	run = list;
	while (run != NULL)
	{
		ft_printf("%s\n", run->content);
		struct t_node	*temp;
		temp =  run;
		run = run->next;
		free(temp);
	}
}
