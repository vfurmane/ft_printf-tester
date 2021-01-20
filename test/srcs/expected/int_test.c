/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/20 14:13:07 by vfurmane         ###   ########.fr       */
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
	printf("12. Returned value	: %d\n", printf("%07d\n", nbr));
	printf("13. Returned value	: %d\n", printf("%-7d\n", nbr));
	printf("14. Returned value	: %d\n", printf("%0-7d\n", nbr));
	printf("15. Returned value	: %d\n", printf("%-07d\n", nbr));
	printf("16. Returned value	: %d\n", printf("%00d\n", nbr));
	printf("17. Returned value	: %d\n", printf("%.7d\n", nbr));
	printf("18. Returned value	: %d\n", printf("%5.7d\n", nbr));
	printf("19. Returned value	: %d\n", printf("%0.d\n", nbr));
	printf("20. Returned value	: %d\n", printf("%0.d\n", 0));
	printf("21. Returned value	: %d\n", printf("%0.7d\n", nbr));
	printf("22. Returned value	: %d\n", printf("%-.7d\n", nbr));
	printf("23. Returned value	: %d\n", printf("%.*d\n", 7, nbr));
	printf("24. WPL - Returned value	: %d\n", printf("WPL - %Hello Wo%rld\n"));
	return (0);
}
