/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:48:10 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/07 18:13:15 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	control;

	control = 0;
	while (control <= n - 1)
	{
		dest[control] = src[control];
		control++;
	}
	while (dest[control] != '\0')
	{
		dest[control] = '\0';
		control++;
	}
	return (dest);
}

 int     main()
 {
   char    dest[] = "perfeito";
    char    src[] = "conceito";
    printf("src before: %s\n",src);
    printf("dest before: %s\n",dest);
   ft_strncpy(dest, src, 3);

    printf("dest after: %s\n",dest);

    return (0);

 }
