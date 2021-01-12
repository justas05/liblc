/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:08:28 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/22 21:08:28 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <limits.h>
#include <stddef.h>

void	*ft_print_addr(void *addr, int big)
{
	unsigned long long addr_1;
	size_t size;

	addr_1 = (unsigned long long)addr;
	size = sizeof(addr);
	while (size != 0)
	{
		ft_print_hex_byte((addr_1 >> ((size - 1) * CHAR_BIT)) & 0xFF, big);
		size--;
	}
	return (addr);
}