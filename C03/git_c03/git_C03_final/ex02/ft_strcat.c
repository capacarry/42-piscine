/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:32:00 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/04 15:56:28 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_d;

	size_d = count(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[i + size_d] = '\0';
	return (dest);
}

// #include<stdio.h>
// int     main(int argc, char *argv[])
// {
//     printf("index: %d", argc);
//     printf("dest : %s\n",argv[1]);
//     printf("src : %s\n",argv[2]);
//     printf("dest after : %s", ft_strcat(argv[1],argv[2]));
//     return(0);
// }