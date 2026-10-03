/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajlouni <rajlouni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:13:16 by rajlouni          #+#    #+#             */
/*   Updated: 2026/10/01 13:28:25 by rajlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_print_ptr_hex(unsigned long long num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num >= 16)
		return (ft_print_ptr_hex(num / 16) + ft_print_ptr_hex(num % 16));
	return (ft_print_char(hex[num]));
}

int	ft_print_ptr(void *ptr)
{
	if (!ptr)
		return (ft_print_str("(nil)"));
	return (ft_print_str("0x") + ft_print_ptr_hex((unsigned long long)ptr));
}
