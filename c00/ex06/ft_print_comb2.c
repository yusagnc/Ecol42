/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:48:28 by yusa              #+#    #+#             */
/*   Updated: 2022/08/31 16:25:04 by ygenc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	sayi1;
	int	sayi2;

	sayi1 = 0;
	sayi2 = 1;
	while (sayi1 <= 98)
	{
		sayi2 = sayi1 + 1;
		while (sayi2 <= 99)
		{
			ft_putchar(sayi1 / 10 + 48);
			ft_putchar(sayi1 % 10 + 48);
			write(1, " ", 1);
			ft_putchar(sayi2 / 10 + 48);
			ft_putchar(sayi2 % 10 + 48);
			if (sayi1 != 98)
			{
				write(1, ", ", 2);
			}
			sayi2++;
		}
		sayi1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
