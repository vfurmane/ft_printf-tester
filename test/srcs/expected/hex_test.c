/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/20 12:34:08 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 42;
	printf("01. Returned value	: %d\n", printf("%x\n", nbr));
	printf("02. Returned value	: %d\n", printf("%x\n", 0));
	printf("03. Returned value	: %d\n", printf("Hello World and %x\n", nbr));
	printf("04. Returned value	: %d\n", printf("Hello %x and World\n", nbr));
	printf("05. Returned value	: %d\n", printf("%x - %x = %x\n", nbr, nbr, nbr - nbr));
	printf("06. Returned value	: %d\n", printf("%x - %x = %x\n", nbr, -nbr, nbr - -nbr));
	printf("07. Returned value	: %d\n", printf("%0x\n", nbr));
	printf("08. Returned value	: %d\n", printf("%-x\n", nbr));
	printf("09. Returned value	: %d\n", printf("%7x\n", nbr));
	printf("10. Returned value	: %d\n", printf("%*x\n", 7, nbr));
	printf("11. Returned value	: %d\n", printf("%07x\n", nbr));
	printf("12. Returned value	: %d\n", printf("%-7x\n", nbr));
	printf("13. Returned value	: %d\n", printf("%0-7x\n", nbr));
	printf("14. Returned value	: %d\n", printf("%-07x\n", nbr));
	printf("15. Returned value	: %d\n", printf("%00x\n", nbr));
	printf("16. Returned value	: %d\n", printf("%.7x\n", nbr));
	printf("17. Returned value	: %d\n", printf("%5.7x\n", nbr));
	printf("18. Returned value	: %d\n", printf("%0.x\n", nbr));
	printf("19. Returned value	: %d\n", printf("%0.x\n", 0));
	printf("20. Returned value	: %d\n", printf("%0.7x\n", nbr));
	printf("21. Returned value	: %d\n", printf("%-.7x\n", nbr));
	printf("22. Returned value	: %d\n", printf("%.*x\n", 7, nbr));
	return (0);
}
