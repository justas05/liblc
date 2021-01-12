/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/04 11:07:59 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

typedef	struct				s_linked_list
{
	void					*content;
	struct s_linked_list	*next;
}							t_linked_list;

typedef	struct				s_list
{
	t_linked_list			*content;
	struct s_list			*last;
	size_t					size;
}							t_list;

t_list						*ft_lstnew(void *data);
void						ft_lstadd_front(t_list **begin_list,
											void *data);
void						ft_lstadd_back(t_list **begin_list,
											void *data);
t_list						*ft_lstlast(t_list *begin_list);
size_t						ft_lstsize(t_list *begin_list);
void						ft_lstclear(t_list **begin_list,
										void (*free_fct)(void *));
void						ft_lstiter(t_list *begin_list,
										void (*f)(void *));
void						ft_lstdelone(t_list *item,
										void (*f)(void *));
t_list						*ft_lstmap(t_list *lst,
										void *(*f)(void *),
										void (*del)(void *));

#endif



typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int				(*compare)(void *, void *);

t_list	*lc_lst_new(void *data)
{
	t_list *t = (t_list*)malloc(sizeof(t_list));
	if (t)
	{
		t->data = data;
		t->next = NULL;
	}
	return t;
}

size_t	lc_lst_size(t_list *head)
{
	size_t len = 0;

	while (head)
	{
		++len;
		head = head->next;
	}
	return len;
}

t_list	*lc_lst_last(t_list *head)
{
	if (!head)
		return NULL;
	while (head->next)
		head = head->next;
	return head;
}

void	lc_lst_clear(t_list **head, void (*cls_data)(void *data))
{
	t_list *walker = *head;
	t_list *temp;

	while (walker)
	{
		temp = walker;
		if (cls_data)
			cls_data(walker->data);
		walker = walker->next;
		free(temp);
	}
	*head = NULL;
}

void	lc_lst_push_front(t_list **head, void *data)
{
	t_list *push_item = lc_lst_new(data);
	if (push_item)
	{
		push_item->next = *head;
		*head = push_item;
	}
}

void	lc_lst_push_back(t_list **head, void *data)
{
	t_list *push_item = lc_lst_new(data);
	t_list *last = lc_lst_last(*head);

	if (push_item)
	{
		if (last)
			last->next = push_item;
		else
			*head = push_item;
	}
}

void	ls_lst_sorted_insert(t_list **sorted_list, void *data,
							int (*comp)(void *left, void *right))
{
	t_list *push_item = NULL;
	t_list *walker = *sorted_list;
	t_list *previous = NULL;

	if (!(push_item = lc_lst_new(data)))
		return ;
	while (walker && comp(walker->data, data) < 0)
	{
		previous = walker;
		walker = walker->next;
	}
	if (previous)
	{
		push_item->next = walker;
		previous->next = push_item;
	}
	else
	{
		push_item->next = *sorted_list;
		*sorted_list = push_item;
	}
}

void	lc_list_foreach(t_list *head, void (*f)(void *))
{
	while (head)
	{
		f(head->data);
		head = head->next;
	}
}