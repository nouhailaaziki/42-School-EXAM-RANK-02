/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:32:59 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/04 12:33:46 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
			{
				argv[1][i] -= 25;
				write(1, &argv[1][i], 1);
			}
			else if ((argv[1][i] >= 'a' && argv[1][i] <= 'z')
			|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				argv[1][i] += 1;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
