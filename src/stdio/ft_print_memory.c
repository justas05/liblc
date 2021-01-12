/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/04 11:07:59 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_ctype.h"
#include <stddef.h>

void		ft_print_memory(void *addr, size_t size, size_t block)
{
	if (!addr)
		return ;
	while (size)
	{
		block = (size > block ? block : size);
		ft_print_addr(addr, 0);
		ft_print_bytes(addr, block, ' ');
		ft_print_chars(addr, block, '.');
		if ((i + 1) % block == 0)
			write(1, "\n", 1);
		addr += block;
		size -= block;
	}
}
