/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:20:11 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/06 17:40:52 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

// #include <stdio.h>
// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	int n;
// 	int res;

// 	n = -5;
// 	while (n <= 10)
// 	{
// 		res = ft_recursive_factorial(n);
// 		printf("n = %d, n! = %d\n", n, res);
// 		n++;
// 	}
// 	return (0);
// }
