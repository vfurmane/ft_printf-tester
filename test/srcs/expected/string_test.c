/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/24 11:38:52 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello World";
	printf("01. Returned value	: %d\n", printf("Hello World\n"));
	printf("02. Returned value	: %d\n", printf("%s\n", str));
	printf("03. Returned value	: %d\n", printf("%s\n", NULL));
	printf("04. Returned value	: %d\n", printf("%20s\n", str));
	printf("05. WPL - Returned value	: %d\n", printf("WPL - %020s\n", str));
	printf("06. Returned value	: %d\n", printf("%-20s\n", str));
	printf("07. Returned value	: %d\n", printf("%.5s\n", str));
	printf("08. Returned value	: %d\n", printf("%.s\n", str));
	printf("09. Returned value	: %d\n", printf("%p\n", (void*)42));
	printf("10. WPL - Returned value	: %d\n", printf("WPL - %p\n", NULL));
	printf("11. WPL - Returned value	: %d\n", printf("WPL - %7.p\n", NULL));
	printf("12. Returned value	: %d\n", printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0));
	return (0);
}
