/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:29 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (from < to)
	{
		from += num - 1;
		to += num - 1;
		while (num)
		{
			*to-- = *from--;
			--num;
		}
	}
	else if (from > to)
	{
		while (num)
		{
			*to++ = *from++;
			--num;
		}
	}
	return (dest);
}
