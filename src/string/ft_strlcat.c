/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:20:41 by hbooke            #+#    #+#             */
/*   Updated: 2020/07/19 13:00:37 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void		ft_copy(char **dest_copy, char **src_copy, size_t *n)
{
	while (**src_copy)
	{
		if (*n != 1)
		{
			**dest_copy = **src_copy;
			*dest_copy += 1;
			--*n;
		}
		++*src_copy;
	}
	**dest_copy = '\0';
}

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*dest_copy;
	char	*src_copy;
	size_t	n;
	size_t	dest_len;

	dest_copy = dest;
	src_copy = (char*)src;
	n = size;
	while (n-- && *dest_copy)
		dest_copy++;
	dest_len = dest_copy - dest;
	n = size - dest_len;
	if (!n)
	{
		while (*src_copy++)
			++dest_len;
		return (dest_len);
	}
	ft_copy(&dest_copy, &src_copy, &n);
	return (dest_len + src_copy - src);
}
