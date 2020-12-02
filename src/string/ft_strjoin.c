/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:05 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:28 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

static char	*mkempty(void)
{
	char *res;

	res = malloc(1);
	*res = 0;
	return (res);
}

char		*ft_strjoin(char *str1, char *str2)
{
	char	*res;
	size_t	len1;

	if (!str1 || !str2)
		res = mkempty();
	else
	{
		len1 = ft_strlen(str1);
		if (!(res = malloc(sizeof(char) * (len1 + ft_strlen(str2) + 1))))
			res = NULL;
		else
		{
			*res = 0;
			ft_strcat(res, str1);
			ft_strcat(res + len1, str2);
		}
	}
	return (res);
}
