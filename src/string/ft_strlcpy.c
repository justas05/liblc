/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 14:50:41 by hbooke            #+#    #+#             */
/*   Updated: 2020/07/18 23:09:43 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		count;
	char	*src_copy;

	count = size;
	src_copy = (char*)src;
	if (!dest || !src)
		return (0);
	if (size)
		while (--size && (*dest++ = *src++))
			;
	if (!size)
	{
		if (count)
			*dest = '\0';
		while (*src++)
			;
	}
	return (src - src_copy - 1);
}
