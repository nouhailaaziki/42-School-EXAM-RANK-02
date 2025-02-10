/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:18:21 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/10 18:50:20 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i -= 1;
		while ((argv[1][i] == 32 || argv[1][i] == '\t') && i > 0)
			i--;
		j = i;
		while (argv[1][j] != 32 && argv[1][j] != '\t' && j >= 0)
			j--;
		j += 1;
		while (j <= i)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
