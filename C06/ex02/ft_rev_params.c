/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:13:18 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/02/09 18:08:02 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (argc > 0)
	{
		count = argc - 1;
	}
	while (count > 0)
	{
		while (argv[count][i] != '\0')
		{
			write(1, &argv[count][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		count--;
	}
}
