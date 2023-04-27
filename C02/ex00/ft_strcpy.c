/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:44:00 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/01 19:10:10 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	control;

	control = 0;
	while (src[control] != '\0')
	{
		dest[control] = src[control];
		control++;
	}
	dest[control] = '\0';
	return (dest);
}

// int     main()
// {
//    char    dest[] = "ardiloso";
//    char    src[] = "conceito";
//    printf("src before: %s\n",src);
//    printf("dest before: %s\n",dest);
//    ft_strcpy(dest, src);

//    printf("dest after %s\n",dest);

//    return (0);

// }