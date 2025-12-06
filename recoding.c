/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recoding.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-all <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:19:51 by oait-all          #+#    #+#             */
/*   Updated: 2025/08/27 16:29:08 by oait-all         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void putnbr(int nbr)
{
    if (nbr > 9)
    {
        putnbr(nbr / 10);
    }
   ft_putchar((nbr % 10) + '0');
}


int main ()
{
     char letter = 'a';
    
     while (letter <= 'z')
     {
         write(1,&letter,1);
	 write(1," :",2);
	 putnbr(letter);
	 write(1,"\n",1);
         letter++;
     }


}
