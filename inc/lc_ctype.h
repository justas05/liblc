/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lc_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/04 11:07:59 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LC_CTYPE_H
# define LC_CTYPE_H

int		lc_isalpha(int c);
int		lc_isblank(int c);
int		lc_isspace(int c);
int		lc_isascii(int c);
int		lc_isalnum(int c);
int		lc_iscntrl(int c);
int		lc_isdigit(int c);
int		lc_isgraph(int c);
int		lc_islower(int c);
int		lc_isprint(int c);
int		lc_ispunct(int c);
int		lc_isupper(int c);
int		lc_isxdigit(int c);
int		lc_tolower(int c);
int		lc_toupper(int c);

#endif
