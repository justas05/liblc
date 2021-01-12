/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lc_bits.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbooke <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:41:29 by hbooke            #+#    #+#             */
/*   Updated: 2020/11/04 11:07:59 by hbooke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LC_BITS_H
# define LC_BITS_H

# include <stddef.h>

int 	lc_get_bit(int a, size_t n);
int		lc_set_bit(int a, size_t n);
int		lc_reset_bit(int a, size_t n);
int		lc_switch_bit(int a, size_t n);
int		lc_zero_var(int a);
int		lc_zero_var2(int a);
int		lc_mult_2(int a);
int		lc_mult_2n(int a, int n);
int		lc_2n(int n);
int		lc_div_2(int a);
int		lc_div_2n(int a, int n);
int		lc_is_equal(int a, int b);
int		lc_is_even(int a);
int		lc_swap_bits(int *a, int *b);
int		lc_abs_bits(int a);
int		lc_opposite(int a);
int		lc_is_pow2(int a);
int		lc_npow2_mod_m(int n, int m);
int		lc_right_one(int a);
int		lc_right_zero(int a);
int		lc_switch_right_zero(int a);
int		lc_round_pow2(int a);
int		lc_get_int_max();
int		lc_get_int_min();
int		lc_get_long_max();
int		lc_get_long_min();

#endif
