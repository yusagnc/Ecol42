/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzun <huzun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:55:04 by huzun             #+#    #+#             */
/*   Updated: 2022/09/07 19:17:40 by huzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	chr;

	i = 0;
	while (*(str + i))
	{
		chr = str[i];
		if (str[i] >= ' ' && str[i] < 127)
			ft_putchar(chr);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[chr / 16]);
			ft_putchar("0123456789abcdef"[chr % 16]);
		}
		i++;
	}
}
