/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_addback.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:10:05 by ijaija            #+#    #+#             */
/*   Updated: 2023/12/07 16:14:18 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void l_addback(t_list *list, t_node *node)
{
	if (!node || !list)
		return ;
	if (!list->tail && list->head)
		list->tail = node;
	else if (!list->tail && !list->head)
		list->head = node;
	else
		list->tail->next = node;
}