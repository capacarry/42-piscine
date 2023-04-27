/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:41:49 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/14 12:34:19 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_d;

	size_d = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[i + size_d] = '\0';
	return (dest);
}

int	ft_count_s(int size, char **strs, int sep)
{
	int	full_s;
	int	i;

	full_s = 0;
	i = 0;
	while (i < size)
	{
		full_s += (ft_strlen(strs[i]) + sep);
		i++;
	}
	full_s -= sep;
	return (full_s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		full_s;

	full_s = 0;
	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char));
		return (dest);
	}
	i = 0;
	full_s = ft_count_s(size, strs, ft_strlen(sep));
	dest = (char *)malloc(sizeof(char) * (full_s + 1));
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	dest[full_s + 1] = '\0';
	return (dest);
}

// #include <stdio.h>

// char	*ft_strjoin(int size, char **strs, char *sep);

// int	main(void)
// {
// 	int offset;
// 	char **strs;
// 	char *res_str;

// 	strs = malloc(3 * sizeof(char *));
// 	if (strs == NULL)
// 		return (1);
// 	offset = 0;
// 	while (offset < 3)
// 	{
// 		strs[offset] = "abc";
// 		offset++;
// 	}
// 	res_str = ft_strjoin(3, strs, ", ");
// 	if (res_str == NULL)
// 		return (1);
// 	printf("res: %s\n", res_str);
// 	free(strs);
// 	free(res_str);
// 	return (0);
// }