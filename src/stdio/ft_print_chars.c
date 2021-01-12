/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.h                                   :+:      :+:    :+:   */
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

void		ft_print_chars(void *addr, size_t size, char non_print)
{
	size_t	i;

	if (!addr)
		return ;
	i = 0;
	while (i < size)
	{
		if (ft_isprint(*((char*)addr + i)))
			write(1, addr + i, 1);
		else
			write(1, &non_print, 1);
		++i;
	}
}
