/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:29 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_word_count(char *str, const char sep)
{
	size_t	count;
	int		state;

	count = 0;
	state = 0;
	while (*str)
	{
		if (sep != *str)
		{
			if (!state)
				count++;
			state = 1;
		}
		else
			state = 0;
		++str;
	}
	return (count);
}