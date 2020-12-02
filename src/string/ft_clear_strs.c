/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_strs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:29 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_clear_strs(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	if (!strs)
		return ;
	while (i < size)
	{
		if (strs[i])
			free(strs[i]);
		++i;
	}
	free(strs);
}