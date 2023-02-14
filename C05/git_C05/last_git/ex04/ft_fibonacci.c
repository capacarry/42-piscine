/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:37:56 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/08 15:59:07 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// int	main(void)
// {
// 	int res;
// 	int index;

// 	index = 0;
// 	while (index < 12)
// 	{
// 		res = ft_fibonacci(index);
// 		printf ("%d, ", res);
// 		index++;
// 	}
// 	res = ft_fibonacci(index);
// 	printf ("%d\n", res);
// 	return (0);
// }