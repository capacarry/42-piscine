/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:31:30 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/01/31 12:34:23 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int		main(void)
// {
// 	int	a = 45;
// 	int	b = 7;
// 	int	div, mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div=%d, mod=%d", div, mod);
// 	return (0);
// }
