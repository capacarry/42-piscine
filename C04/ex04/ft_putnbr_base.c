/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:24:33 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/07 13:16:41 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_converter(long int n, int len, char *base);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	num;
	int			len;

	num = nbr;
	len = 0;
	while (base[len])
		len++;
	if (len <= 1)
		return ;
	if (!ft_check_base(base))
		return ;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	ft_converter(num, len, base);
}

void	ft_converter(long int n, int len, char *base)
{
	if (n / len == 0)
	{
		ft_putchar(base[n % len]);
		return ;
	}
	else
	{
		ft_converter(n / len, len, base);
		ft_putchar(base[n % len]);
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(6, "abc");
// 	return (0);
// }

