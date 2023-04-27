/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:01:29 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/05 14:09:10 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
// #include <stdio.h>
// int     main()
// {
//     unsigned int  i = 0;
//     char str1[] = "Hellopo";
//     char str2[] = "HelloWorld";
//     unsigned int  offset = 9;

//     while(i < offset)
//     {
//         if(ft_strncmp(str1, str2, offset) != 0)
//         {
//             printf("%d",ft_strncmp(str1, str2, offset));
//             return(0) ;
//         }
//         printf("%d",ft_strncmp(str1, str2, offset));
//         i++;
//     }
//     return(0);
// }