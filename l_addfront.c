/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_addfront.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:07:46 by ijaija            #+#    #+#             */
/*   Updated: 2023/12/07 16:11:06 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void l_addfront(t_list *list, t_node *node)
{
	if (!node || !list)
		return ;
	node->next = list->head;
	list->head = node;
}