/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04i/16 16:29:22 by elsikira          #+#    #+#            */
/*   Updated: 2024/04/17 17:27:26 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_make_list(int argc, char *argv[])
{
	t_node	*list_a;
	t_node	*list_b;
	t_node	*end;
	t_node	*ptr_node;
	int		i;

	list_a = NULL;
	list_b = NULL;
	end = NULL;
	i = 1;
	while (i < argc)
	{
		ptr_node = malloc(sizeof(*list_a));
		ptr_node->content = malloc(ft_strlen(argv[i] + 1));
		ft_strcpy(ptr_node->content, argv[i]);
		ptr_node->next = NULL;
		if (list_a == NULL)
		{
			list_a = ptr_node;
			end = ptr_node;
		}
		else
		{
			end->next = ptr_node;
			end = ptr_node;
		}
		i++;
	}
	return (list_a);	
}

void	ft_print_and_free_list(t_node *list_a)
{
	t_node	*run;
	t_node	*temp;

	run = list_a;
	while (run != NULL)
	{
		ft_printf("%s\n", run->content);
		temp = run;
		run = run->next;
		free(temp);
	}
}
