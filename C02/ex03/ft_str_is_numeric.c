/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:14:39 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/01 10:38:30 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] > 57 || str[i] < 48)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

//int	main(void)
//{
//	int value;
//	char str[] = "1234";
//	value = ft_str_is_numeric(str);
//	printf("%d", value);
//	return (0);
//}