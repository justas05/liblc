/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bytes.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/04 11:07:59 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <stddef.h>

void		ft_print_bytes(void *addr, size_t size, char sep)
{
	size_t	i;

	if (!addr)
		return ;
	i = 0;
	while (i < size)
	{
		ft_print_hex_byte(addr + i, 0);
		if (i + 1 != size)
			write(1, &sep, 1);
		++i;
	}
}
