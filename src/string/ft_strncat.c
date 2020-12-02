/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *dest_copy;

	dest_copy = dest;
	while (*dest)
		++dest;
	while (n-- && (*dest = *src++))
		++dest;
	*dest = 0;
	return (dest_copy);
}
