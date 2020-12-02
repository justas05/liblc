/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:23:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/05 16:23:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "ft_string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;

	if (!s)
		res = malloc(0);
	else if (start >= ft_strlen(s))
	{
		res = malloc(1);
		if (res)
			*res = '\0';
	}
	else
		res = (ft_strndup(s + start, len));
	return (res);
}
