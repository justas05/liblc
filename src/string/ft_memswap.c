/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:29 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

#include <stdlib.h>
#include <stddef.h>

void	*ft_memswap(void *dest, void *src, size_t num)
{
	char	*from;
	char	*to;

	from = (char *)src;
	to = (char *)dest;
	if (from < to)
	{
		from += num - 1;
		to += num - 1;
		while (num)
		{
			ft_swapc(from--, to--);
			--num;
		}
	}
	else if (from > to)
	{
		while (num)
		{
			ft_swapc(from++, to++);
			--num;
		}
	}
	return (dest);
}
