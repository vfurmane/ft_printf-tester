/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/23 12:08:25 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 42;
	printf("01. Returned value	: %d\n", printf("Hello World\n"));
	printf("02. Returned value	: %d\n", printf("%d\n", nbr));
	printf("03. Returned value	: %d\n", printf("%d\n", 0));
	printf("04. Returned value	: %d\n", printf("Hello World and %d\n", nbr));
	printf("05. Returned value	: %d\n", printf("Hello %d and World\n", nbr));
	printf("06. Returned value	: %d\n", printf("%d - %d = %d\n", nbr, nbr, nbr - nbr));
	printf("07. Returned value	: %d\n", printf("%d - %d = %d\n", nbr, -nbr, nbr - -nbr));
	printf("08. Returned value	: %d\n", printf("%0d\n", nbr));
	printf("09. Returned value	: %d\n", printf("%-d\n", nbr));
	printf("10. Returned value	: %d\n", printf("%7d\n", nbr));
	printf("11. Returned value	: %d\n", printf("%*d\n", 7, nbr));
	printf("12. Returned value	: %d\n", printf("%0*d\n", 1, 0));
	printf("13. Returned value	: %d\n", printf("%*d %*d %*d\n", -4, 42, -4, 22, -4, 2147483647));
	printf("14. Returned value	: %d\n", printf("%07d\n", nbr));
	printf("15. Returned value	: %d\n", printf("%03d\n", -nbr));
	printf("16. Returned value	: %d\n", printf("%04d\n", -nbr));
	printf("17. Returned value	: %d\n", printf("%-7d\n", nbr));
	printf("18. Returned value	: %d\n", printf("%0-7d\n", nbr));
	printf("19. Returned value	: %d\n", printf("%-07d\n", nbr));
	printf("20. Returned value	: %d\n", printf("%00d\n", nbr));
	printf("21. Returned value	: %d\n", printf("%.7d\n", nbr));
	printf("22. Returned value	: %d\n", printf("%5.7d\n", nbr));
	printf("23. Returned value	: %d\n", printf("%0.d\n", nbr));
	printf("24. Returned value	: %d\n", printf("%0.d\n", 0));
	printf("25. Returned value	: %d\n", printf("%0.7d\n", nbr));
	printf("26. Returned value	: %d\n", printf("%07.4d\n", nbr));
	printf("27. Returned value	: %d\n", printf("%-.7d\n", nbr));
	printf("28. Returned value	: %d\n", printf("%.*d\n", 7, nbr));
	printf("29. Returned value	: %d\n", printf("%*.*d %0*.*d\n", -3, -3, nbr, 4, -2, -nbr));
	printf("30. Returned value	: %d\n", printf("%.*d %.*d %.*d\n", 7, -nbr, 3, -nbr, -4, nbr));
	printf("31. Returned value	: %d\n", printf("%01.0d, %03.0d, %05.0d\n", 0, 0, nbr));
	printf("32. WPL - Returned value	: %d\n", printf("WPL - %Hello Wo%rld\n"));
	return (0);
}
