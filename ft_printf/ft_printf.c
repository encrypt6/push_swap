/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:55:17 by elsikira          #+#    #+#             */
/*   Updated: 2024/04/17 12:05:22 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_p(void *value)
{
	int	len;

	len = 0;
	if (value != NULL)
	{
		write(1, "0x", 2);
		len = ft_putnbr_basep((uintptr_t)value, "0123456789abcdef") + 2;
	}
	else
	{
		len = write(1, "(nil)", 5);
	}
	return (len);
}

int	ft_mandat(const char *format, va_list ap)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len += ft_putchar((char)va_arg(ap, int));
	if (*format == 's')
		len += ft_putstr(va_arg(ap, char *));
	if (*format == 'p')
		len += ft_is_p(va_arg(ap, void *));
	if (*format == 'd')
		len += ft_putnbr(va_arg(ap, int));
	if (*format == 'i')
		len += ft_putnbr(va_arg(ap, int));
	if (*format == 'u')
		len += ft_putnbr(va_arg(ap, unsigned int));
	if (*format == 'x')
		len += ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
	if (*format == 'X')
		len += ft_putnbr_base(va_arg(ap, unsigned long), "0123456789ABCDEF");
	if (*format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *formatt, ...)
{
	va_list	ap;
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	if (formatt == NULL)
		return (-1);
	va_start(ap, formatt);
	while (i < ft_strlen(formatt))
	{
		if (formatt[i] == '%')
		{
			i++;
			len += ft_mandat(&formatt[i], ap);
		}
		else
			len += ft_putchar(formatt[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
// int	main(void)
// {
// 	ft_printf("%c%c\n", 'a', 'b');
// }
