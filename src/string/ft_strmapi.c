/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 00:00:58 by hbooke            #+#    #+#             */
/*   Updated: 2020/07/30 23:37:16 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	res = NULL;
	if (s)
	{
		res = ft_strdup(s);
		if (res && f)
		{
			i = 0;
			while (res[i])
			{
				res[i] = f(i, res[i]);
				++i;
			}
		}
	}
	return (res);
}
