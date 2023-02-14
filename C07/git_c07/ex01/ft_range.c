/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:21:55 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/13 14:41:04 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*mid;
	int	i;
	int	result;

	result = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	mid = (int *)malloc(sizeof(int) * (result));
	if (!mid)
		return (NULL);
	while (min < max)
	{
		mid[i] = min;
		min = min + 1;
		i++;
	}
	return (mid);
}

// #include<stdio.h>
// int     main(void)
// {
//     int a;
//     int b;
//     int *between;

//     a = 15;
//     b = 20;
//     int i = 0;

//     between = ft_range(a,b);
//     while(a < b)
//     {
//         printf("%d",between[i]);
//         printf("  ");
//         i++;
//         a++;
//     }
//     free(between);
// }