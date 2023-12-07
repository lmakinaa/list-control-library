/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_addafter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:14:32 by ijaija            #+#    #+#             */
/*   Updated: 2023/12/07 16:22:00 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void l_addafter(t_list *list, t_node *node1 , t_node *node2)
{
	t_node	*tmp;
	t_node	*tmp1;
	t_node	*head;

	if (!list || !list->head)
	{	
		printf("Invalide list!\n");
		return ;
	}
	head = list->head;
	while (head && head->next)
	{
		tmp = head;
		if (tmp == node1)
		{
			tmp1 = tmp->next;
			tmp->next = node2;
			node2->next = tmp1;
			return ;
		}
	}
}