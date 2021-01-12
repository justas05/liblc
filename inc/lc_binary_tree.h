/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lc_binary_tree.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/04 11:07:59 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LC_BINARY_TREE_H
# define LC_BINARY_TREE_H

typedef struct		s_btree_node
{
	void			*data;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

t_btree				*btree_create_node(void *item);
void				btree_insert_data(t_btree **root, void *item,
										int (*cmpf)(void *, void *));
void				btree_remove_data(t_btree **root, void *item,
										int (*cmpf)(void *, void *),
										void (*clrf)(void *)); /////////////////////////////
int					btree_level_count(t_btree *root);
void				*btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *));

void				btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void				btree_apply_infix(t_btree *root, void (*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void (*applyf)(void *));

#endif
