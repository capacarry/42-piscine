/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:01:44 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/08 18:25:36 by gcapa-pe         ###   ########.fr       */
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
	return (i);
}

int	ft_is_prime(int nb)
{
	long long	i;
	long long	sqrt;

	i = 2;
	sqrt = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	while (i <= sqrt)
	{
		if (nb % i != 0)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include<stdio.h>
// int     main()
// {
//     printf("%d",ft_is_prime(0));
//     return(0);
// }