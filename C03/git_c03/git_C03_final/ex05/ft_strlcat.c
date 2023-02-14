/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:47:28 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/07 13:16:41 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	result;

	a = 0;
	b = 0;
	result = 0;
	while (dest[a] != '\0')
		a++;
	while (src[result] != '\0')
		result++;
	if (size <= a)
		result += size;
	else
		result += a;
	while (src[b] != '\0' && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (result);
}

//  #include<stdio.h>
// int     main()
// {
// 	char str1[] = "Hello";
// 	char str2[] = "World";
//     printf("total length: %d\n dest after: %s" ,ft_strlcat(str1,str2,10),str1);
// 					return(0);
// }