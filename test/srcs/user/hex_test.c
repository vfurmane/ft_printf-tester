/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/20 12:33:50 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	nbr;

	nbr = 42;
	ft_printf("01. Returned value	: %d\n", ft_printf("%x\n", nbr));
	ft_printf("02. Returned value	: %d\n", ft_printf("%x\n", 0));
	ft_printf("03. Returned value	: %d\n", ft_printf("Hello World and %x\n", nbr));
	ft_printf("04. Returned value	: %d\n", ft_printf("Hello %x and World\n", nbr));
	ft_printf("05. Returned value	: %d\n", ft_printf("%x - %x = %x\n", nbr, nbr, nbr - nbr));
	ft_printf("06. Returned value	: %d\n", ft_printf("%x - %x = %x\n", nbr, -nbr, nbr - -nbr));
	ft_printf("07. Returned value	: %d\n", ft_printf("%0x\n", nbr));
	ft_printf("08. Returned value	: %d\n", ft_printf("%-x\n", nbr));
	ft_printf("09. Returned value	: %d\n", ft_printf("%7x\n", nbr));
	ft_printf("10. Returned value	: %d\n", ft_printf("%*x\n", 7, nbr));
	ft_printf("11. Returned value	: %d\n", ft_printf("%07x\n", nbr));
	ft_printf("12. Returned value	: %d\n", ft_printf("%-7x\n", nbr));
	ft_printf("13. Returned value	: %d\n", ft_printf("%0-7x\n", nbr));
	ft_printf("14. Returned value	: %d\n", ft_printf("%-07x\n", nbr));
	ft_printf("15. Returned value	: %d\n", ft_printf("%00x\n", nbr));
	ft_printf("16. Returned value	: %d\n", ft_printf("%.7x\n", nbr));
	ft_printf("17. Returned value	: %d\n", ft_printf("%5.7x\n", nbr));
	ft_printf("18. Returned value	: %d\n", ft_printf("%0.x\n", nbr));
	ft_printf("19. Returned value	: %d\n", ft_printf("%0.x\n", 0));
	ft_printf("20. Returned value	: %d\n", ft_printf("%0.7x\n", nbr));
	ft_printf("21. Returned value	: %d\n", ft_printf("%-.7x\n", nbr));
	ft_printf("22. Returned value	: %d\n", ft_printf("%.*x\n", 7, nbr));
	return (0);
}
