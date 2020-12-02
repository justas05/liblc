/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:30 by hbooke            #+#    #+#             */
/*   Updated: 2020/10/29 02:41:30 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include <limits.h>

static void			ft_skip_spaces(char **buf, int *neg, int *base)
{
	int c;

	while (ft_isspace(**buf))
		++(*buf);
	*neg = 0;
	if (**buf == '-' || **buf == '+')
	{
		if (**buf == '-')
			*neg = 1;
		++(*buf);
	}
	if ((*base == 0 || *base == 16) && **buf == '0' &&
		(*(*buf + 1) == 'x' || *(*buf + 1) == 'X'))
	{
		*base = 16;
		c = **buf;
		*buf += 2;
	}
	if (*base == 0)
		*base = (c == '0') ? 8 : 10;
}

static int			ft_continue_cycle(int *c, int base)
{
	if (ft_isdigit(*c))
		*c -= '0';
	else if (ft_isalpha(*c))
		*c -= ft_isupper(*c) ? 'A' - 10 : 'a' - 10;
	else
		return (0);
	if (*c >= base)
		return (0);
	return (1);
}

static void			ft_change_acc(unsigned long long *acc, int any, int neg)
{
	if (any < 0)
		*acc = neg ? LLONG_MIN : LLONG_MAX;
	else if (neg)
		*acc = -*acc;
}

static long long	ft_crutch(const char *buf, int base, int neg)
{
	unsigned long long	acc;
	int					any;
	int					c;
	int					cutlim;
	unsigned long long	cutoff;

	acc = 0;
	any = 0;
	cutoff = neg ? -(unsigned long long)LLONG_MIN : LLONG_MAX;
	cutlim = cutoff % (unsigned long long)base;
	cutoff /= (unsigned long long)base;
	while ((c = *buf++) && ft_continue_cycle(&c, base))
	{
		if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
			any = -1;
		else
		{
			any = 1;
			acc = acc * base + c;
		}
	}
	ft_change_acc(&acc, any, neg);
	return (acc);
}

long long			ft_strtoll(const char *buf, int base)
{
	int	neg;

	ft_skip_spaces((char**)&buf, &neg, &base);
	return (ft_crutch(buf, base, neg));
}
