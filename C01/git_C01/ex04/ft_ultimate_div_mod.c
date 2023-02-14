/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:31:46 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/31 12:34:55 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

// int main(void)
// {
//     int a = 45;
//     int b = 7;

//     ft_ultimate_div_mod(&a, &b);
// 	printf("div=%d, mod=%d", a, b);
// 	return (0);
// }
