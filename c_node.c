/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_node.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:09:01 by ijaija            #+#    #+#             */
/*   Updated: 2023/12/07 16:31:42 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_node *c_node(int value)
{
	t_node *res;

	if (!(res = malloc(sizeof(t_node))))
		return (NULL);
	res->value = value;
	res->next = NULL;
	return (res);
}