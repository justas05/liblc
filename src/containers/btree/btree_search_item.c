/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 18:55:27 by hbooke            #+#    #+#             */
/*   Updated: 2020/07/31 22:13:11 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	void *data;

	if (!root)
		return (NULL);
	data = btree_search_item(root->left, data_ref, cmpf);
	if (!data && !cmpf(root->item, data_ref))
		return (root->item);
	if (!data)
		data = btree_search_item(root->right, data_ref, cmpf);
	return (data);
}
