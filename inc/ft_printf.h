/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajlouni <rajlouni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:58:24 by rajlouni          #+#    #+#             */
/*   Updated: 2026/10/01 13:47:49 by rajlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_dispatcher(char specifier, va_list args);

int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_ptr(void *ptr);
int	ft_print_numbers(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int num, char format);

#endif
