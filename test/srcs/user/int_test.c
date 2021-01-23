/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/23 12:08:15 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	nbr;

	nbr = 42;
	ft_printf("01. Returned value	: %d\n", ft_printf("Hello World\n"));
	ft_printf("02. Returned value	: %d\n", ft_printf("%d\n", nbr));
	ft_printf("03. Returned value	: %d\n", ft_printf("%d\n", 0));
	ft_printf("04. Returned value	: %d\n", ft_printf("Hello World and %d\n", nbr));
	ft_printf("05. Returned value	: %d\n", ft_printf("Hello %d and World\n", nbr));
	ft_printf("06. Returned value	: %d\n", ft_printf("%d - %d = %d\n", nbr, nbr, nbr - nbr));
	ft_printf("07. Returned value	: %d\n", ft_printf("%d - %d = %d\n", nbr, -nbr, nbr - -nbr));
	ft_printf("08. Returned value	: %d\n", ft_printf("%0d\n", nbr));
	ft_printf("09. Returned value	: %d\n", ft_printf("%-d\n", nbr));
	ft_printf("10. Returned value	: %d\n", ft_printf("%7d\n", nbr));
	ft_printf("11. Returned value	: %d\n", ft_printf("%*d\n", 7, nbr));
	ft_printf("12. Returned value	: %d\n", ft_printf("%0*d\n", 1, 0));
	ft_printf("13. Returned value	: %d\n", ft_printf("%*d %*d %*d\n", -4, 42, -4, 22, -4, 2147483647));
	ft_printf("14. Returned value	: %d\n", ft_printf("%07d\n", nbr));
	ft_printf("15. Returned value	: %d\n", ft_printf("%03d\n", -nbr));
	ft_printf("16. Returned value	: %d\n", ft_printf("%04d\n", -nbr));
	ft_printf("17. Returned value	: %d\n", ft_printf("%-7d\n", nbr));
	ft_printf("18. Returned value	: %d\n", ft_printf("%0-7d\n", nbr));
	ft_printf("19. Returned value	: %d\n", ft_printf("%-07d\n", nbr));
	ft_printf("20. Returned value	: %d\n", ft_printf("%00d\n", nbr));
	ft_printf("21. Returned value	: %d\n", ft_printf("%.7d\n", nbr));
	ft_printf("22. Returned value	: %d\n", ft_printf("%5.7d\n", nbr));
	ft_printf("23. Returned value	: %d\n", ft_printf("%0.d\n", nbr));
	ft_printf("24. Returned value	: %d\n", ft_printf("%0.d\n", 0));
	ft_printf("25. Returned value	: %d\n", ft_printf("%0.7d\n", nbr));
	ft_printf("26. Returned value	: %d\n", ft_printf("%07.4d\n", nbr));
	ft_printf("27. Returned value	: %d\n", ft_printf("%-.7d\n", nbr));
	ft_printf("28. Returned value	: %d\n", ft_printf("%.*d\n", 7, nbr));
	ft_printf("29. Returned value	: %d\n", ft_printf("%*.*d %0*.*d\n", -3, -3, nbr, 4, -2, -nbr));
	ft_printf("30. Returned value	: %d\n", ft_printf("%.*d %.*d %.*d\n", 7, -nbr, 3, -nbr, -4, nbr));
	ft_printf("31. Returned value	: %d\n", ft_printf("%01.0d, %03.0d, %05.0d\n", 0, 0, nbr));
	ft_printf("32. WPL - Returned value	: %d\n", ft_printf("WPL - %Hello Wo%rld\n"));
	return (0);
}
