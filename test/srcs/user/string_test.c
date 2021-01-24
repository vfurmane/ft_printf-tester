/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/24 11:38:39 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*str;

	str = "Hello World";
	ft_printf("01. Returned value	: %d\n", ft_printf("Hello World\n"));
	ft_printf("02. Returned value	: %d\n", ft_printf("%s\n", str));
	ft_printf("03. Returned value	: %d\n", ft_printf("%s\n", NULL));
	ft_printf("04. Returned value	: %d\n", ft_printf("%20s\n", str));
	ft_printf("05. WPL - Returned value	: %d\n", ft_printf("WPL - %020s\n", str));
	ft_printf("06. Returned value	: %d\n", ft_printf("%-20s\n", str));
	ft_printf("07. Returned value	: %d\n", ft_printf("%.5s\n", str));
	ft_printf("08. Returned value	: %d\n", ft_printf("%.s\n", str));
	ft_printf("09. Returned value	: %d\n", ft_printf("%p\n", (void*)42));
	ft_printf("10. WPL - Returned value	: %d\n", ft_printf("WPL - %p\n", NULL));
	ft_printf("11. WPL - Returned value	: %d\n", ft_printf("WPL - %7.p\n", NULL));
	ft_printf("12. Returned value	: %d\n", ft_printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0));
	return (0);
}
