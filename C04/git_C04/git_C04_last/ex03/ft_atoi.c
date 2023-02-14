/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:24:55 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/05 19:16:20 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	result;

	i = 0;
	is_negative = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			is_negative = is_negative * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * is_negative);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_atoi("\t \r ---+--+1234ab567"));
// 	return (0);
// }