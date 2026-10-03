/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajlouni <rajlouni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:37:23 by rajlouni          #+#    #+#             */
/*   Updated: 2026/09/30 16:35:15 by rajlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_numbers(int n)
{
	if (n == -2147483648)
		return (ft_print_str("-2147483648"));
	if (n < 0)
		return (ft_print_char('-') + ft_print_numbers(-n));
	if (n > 9)
		return (ft_print_numbers(n / 10) + ft_print_numbers(n % 10));
	return (ft_print_char(n + '0'));
}

int	ft_print_unsigned(unsigned int n)
{
	if (n > 9)
		return (ft_print_unsigned(n / 10) + ft_print_unsigned(n % 10));
	return (ft_print_char(n + '0'));
}
