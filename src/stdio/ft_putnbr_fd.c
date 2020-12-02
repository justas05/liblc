/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:38:24 by hbooke            #+#    #+#             */
/*   Updated: 2020/07/15 23:25:14 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stdlib.h"

void			ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		len;
	int		p;

	p = ft_nbr_len(n, &len);
	if (n < 0)
		write(fd, "-", 1);
	while (len--)
	{
		c = '0' + ft_abs(n / p % 10);
		p /= 10;
		write(fd, &c, 1);
	}
}
