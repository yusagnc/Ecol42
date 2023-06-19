/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzun <huzun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:13:50 by huzun             #+#    #+#             */
/*   Updated: 2022/09/13 18:54:56 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a int *b)
{
	int	u;

	u = *a;
	*a = *b;
	*b = u;
}
int main(void)
{
	int a = 20;
	int b = 15;
	ft_swap(&a, &b);
	printf("%d, %d", a, b);
}
