/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huzun <huzun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:06:19 by huzun             #+#    #+#             */
/*   Updated: 2022/09/13 18:43:51 by yusa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int i = 70;
	int *********nbr;
	int ********nbr1;
	int *******nbr2;
	int ******nbr3;
	int *****nbr4;
	int ****nbr5;
	int ***nbr6;
	int **nbr7;
	int *nbr8;

	nbr = &nbr1;
	nbr1 = &nbr2;
	nbr2 = &nbr3;
	nbr3 = &nbr4;
	nbr4 = &nbr5;
	nbr5 = &nbr6;
	nbr6 = &nbr7;
	nbr7 = &nbr8;
	nbr8 = &i;
	
	ft_ultimate_ft(nbr);
	printf("%d", i);
}
