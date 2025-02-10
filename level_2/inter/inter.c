/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:04:39 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/10 17:22:20 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			found = 0;
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					found = 1;
					break ;
				}
				j++;
			}
			if (!found)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
