/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:28 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:28 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void		*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)s + n - 1;
	while (n--)
	{
		if (*ptr == c)
			return (ptr);
		--ptr;
	}
	return (NULL);
}
