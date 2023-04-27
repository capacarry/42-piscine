/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:41:40 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/08 18:28:26 by gcapa-pe         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		++nb;
	return (nb);
}

// #include<stdio.h>
// int     main()
// {
//     printf("%d",ft_find_next_prime(2000000000));
//     return(0);
// }