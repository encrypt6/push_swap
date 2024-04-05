/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:37:31 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/05 20:02:17 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_Node{
	int			data;
	struct Node	*next;
};

struct s_Node	*head = NULL;

void	add_data_to_stack(int data) {
	struct s_Node	*newNode = (struct Node)malloc(sizeof(struct Node));
	if (newNode == NULL){

