/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:36:24 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/13 12:23:17 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * i);
	if (!ptr)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include<stdio.h>
// int     main(void)
// {
//     char str[] = "hello";
//     char *dest;
//     dest = ft_strdup(str);
//     printf("%s", str);
//     free(str);
// }