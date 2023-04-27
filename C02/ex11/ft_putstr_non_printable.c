/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:17:14 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/02 21:08:19 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	ft_char_is_printable(char c)
{
	if (c > 31 && c <= 126)
		return (1);
	else
		return (0);
}

char	ft_dec_to_hex(int n)
{
	char	ch;

	if (n < 10)
		ch = '0' + n;
	else
		ch = 'a' + (n - 10);
	return (ch);
}

void	ft_putstr_non_printable(char *str)
{
	char	ch1;
	char	ch2;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 0)
		{
			ch1 = ft_dec_to_hex(str[i] / 16);
			ch2 = ft_dec_to_hex(str[i] % 16);
			ft_putchar('\\');
			ft_putchar(ch1);
			ft_putchar(ch2);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char str[] = "\fhat HJfthe hell man \n why  \r am i on fi ?re \t";
// 	ft_putstr_non_printable(str);
// 	write(1, "\n", 1);
// 	return (0);
// }

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}