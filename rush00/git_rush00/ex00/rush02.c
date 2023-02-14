/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:42:21 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/28 19:21:27 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	ft_print_h(int x, char left, char mid, char right)
{
	if (x >= 1)
	{
		ft_putchar(left);
		while (x -1 >= 2)
		{
			ft_putchar(mid);
			x--;
		}
	}
	x = 0;
	ft_putchar(right);
}

void	rush(int x, int y)
{		
	if (y > 0 && x > 0)
	{
		if (x == 1)
		x = 0;
		if (y >= 1)
		{
			ft_print_h(x, 'A', 'B', 'A');
		}
		while (y > 2)
		{	
			ft_putchar('\n');
			ft_print_h (x, 'B', ' ', 'B');
				y--;
		}
		if (y != 1)
		{
			ft_putchar('\n');
			ft_print_h (x, 'C', 'B', 'C');
		}
	}	
}	
