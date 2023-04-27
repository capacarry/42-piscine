/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:29:37 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/08 15:54:30 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}

// #include<stdio.h>
// int     main(void)
// {
//     printf("%d",ft_sqrt(16));
//     return (0);
// }