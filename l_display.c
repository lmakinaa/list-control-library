/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_display.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:10:17 by ijaija            #+#    #+#             */
/*   Updated: 2023/12/07 16:07:19 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void l_display(t_list *list)
{
	if (!list)
	{
		printf("The list is empty!\n");
		return ;
	}
	if (!list->head)
	{
		printf("The list have no head!\n");
		return ;
	}
	if (!list->tail)
	{
		printf("The list have no tail!\n");
		return ;
	}
	printf("The head's content-->[%d]", list->head->value);
	printf("The tail's content-->[%d]", list->tail->value);
}