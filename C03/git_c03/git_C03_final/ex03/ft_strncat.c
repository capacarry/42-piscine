/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:19:35 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/05 14:10:28 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include<stdio.h>
// int     main(int argc, char *argv[])
// {
//     printf("index: %d", argc);
//     printf("dest : %s\n",argv[1]);
//     printf("src : %s\n",argv[2]);
//     printf("dest after : %s", ft_strncat(argv[1],argv[2], 3));
//     return(0);
// }