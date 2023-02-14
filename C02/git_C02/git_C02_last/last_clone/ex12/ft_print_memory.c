/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:57:00 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/01 19:48:24 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*dest;
	char	*str;
	char	dot;
	int		i;

	dest = &addr;
	str = addr;
	dot = '.';
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 16^2) 
			write(1, "\n", 2);
		if (ft_char_is_printable(str[i]) == 0)
		{
			write(1, &dot, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	return (dest);
}

// #include <string.h>

// int	main(void)
// {
// 	char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

// 	ft_print_memory(str, strlen(str));
// 	return (0);
// }