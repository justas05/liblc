/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:08:28 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/22 21:08:28 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_realloc(void *ptr, size_t old_size, size_t size)
{
	void	*res;

	res = NULL;
	if (!size)
		free(ptr);
	else if (!ptr)
		res = malloc(size);
	else if (size <= old_size)
		res = ptr;
	else if (ptr && size > old_size)
	{
		res = malloc(size);
		if (res)
		{
			ft_memmove(res, ptr, old_size);
			free(ptr);
		}
	}
	return (res);
}
