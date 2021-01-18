/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:06:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/01/18 18:39:15 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 42;
	printf("Returned value	: %d\n", printf("%d\n", nbr));
	printf("Returned value	: %d\n", printf("Hello World and %d\n", nbr));
	printf("Returned value	: %d\n", printf("Hello %d and World\n", nbr));
	printf("Returned value	: %d\n", printf("%d - %d = %d\n", nbr, nbr, nbr - nbr));
	printf("Returned value	: %d\n", printf("%0d\n", nbr));
	printf("Returned value	: %d\n", printf("%-d\n", nbr));
	printf("Returned value	: %d\n", printf("%7d\n", nbr));
	printf("Returned value	: %d\n", printf("%*d\n", 7, nbr));
	printf("Returned value	: %d\n", printf("%07d\n", nbr));
	printf("Returned value	: %d\n", printf("%-7d\n", nbr));
	printf("Returned value	: %d\n", printf("%0-7d\n", nbr));
	printf("Returned value	: %d\n", printf("%-07d\n", nbr));
	printf("Returned value	: %d\n", printf("%00d\n", nbr));
	printf("Returned value	: %d\n", printf("%.7d\n", nbr));
	printf("Returned value	: %d\n", printf("%5.7d\n", nbr));
	printf("Returned value	: %d\n", printf("%0.7d\n", nbr));
	printf("Returned value	: %d\n", printf("%-.7d\n", nbr));
	printf("Returned value	: %d\n", printf("%.*d\n", 7, nbr));
	printf("Returned value	: %d\n", printf("%Hell% World%\n"));
	printf("Returned value	: %d\n", printf("Hello World and %42\n"));
	return (0);
}
