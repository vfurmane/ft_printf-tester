/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/19 12:26:02 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	nbr;

	nbr = 42;
	ft_printf("Returned value	: %d\n", ft_printf("Hello World\n"));
	ft_printf("Returned value	: %d\n", ft_printf("%d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%d\n", 0));
	ft_printf("Returned value	: %d\n", ft_printf("Hello World and %d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("Hello %d and World\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%d - %d = %d\n", nbr, nbr, nbr - nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%d - %d = %d\n", nbr, -nbr, nbr - -nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%0d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%-d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%7d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%*d\n", 7, nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%07d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%-7d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%0-7d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%-07d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%00d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%.7d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%5.7d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%0.d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%0.d\n", 0));
	ft_printf("Returned value	: %d\n", ft_printf("%0.7d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%-.7d\n", nbr));
	ft_printf("Returned value	: %d\n", ft_printf("%.*d\n", 7, nbr));
	ft_printf("Returned value	: %d\n", ft_printf("WPL - %Hello Wo%rld\n"));
	return (0);
}
