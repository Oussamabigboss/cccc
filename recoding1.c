/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recoding1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:33:01 by oait-all          #+#    #+#             */
/*   Updated: 2025/08/27 17:15:00 by oait-all         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void ft_putchar (char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1,"-2147483648",11);
		return ;
	}
	if (nbr < 0)
	{
		write(1,"-",1);
		nbr = -nbr ;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}

void SumDigit(int n)
{
	int d = n / 10 ;
	int c = n % 10 ;
	ft_putnbr(d + c);
}	

int main ()
{

//	printf("%d\n" , INT_MIN);
//	ft_putnbr(1234);

	int i = 1 ;
	while (i <= 100)
	{
		ft_putnbr(i);
		write (1," :",2);
		SumDigit(i);
		write(1 ,"\n",1);
		i++;
	}
	ft_putnbr(-2147483648);
}
