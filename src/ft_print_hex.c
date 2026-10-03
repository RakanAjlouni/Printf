/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajlouni <rajlouni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:35:34 by rajlouni          #+#    #+#             */
/*   Updated: 2026/10/01 15:11:00 by rajlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_hex(unsigned int num, const char format)
{
	char	*upper_hex;
	char	*lower_hex;

	upper_hex = "0123456789ABCDEF";
	lower_hex = "0123456789abcdef";
	if (num >= 16)
		return (ft_print_hex(num / 16, format)
			+ ft_print_hex(num % 16, format));
	if (format == 'X')
		return (ft_print_char(upper_hex[num]));
	return (ft_print_char(lower_hex[num]));
}
