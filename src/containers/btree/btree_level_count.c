/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 18:55:34 by hbooke            #+#    #+#             */
/*   Updated: 2020/07/31 22:33:27 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lc_btree.h"
#include "lc_stdlib.h"

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (ft_max(btree_level_count(root->left),
				btree_level_count(root->right)) + 1);
}
