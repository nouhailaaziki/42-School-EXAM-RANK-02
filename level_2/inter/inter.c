/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:04:39 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/11 10:05:45 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	checker(char *str, int len, char c)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (i < len)
	{
		if (str[i] == c)
		{
			found = 1;
			break ;
		}
		i++;
	}
	if (!found)
		write(1, &c, 1);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (s1[i])
	{
		found = 0;
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (found == 1)
			checker(s1, i, s1[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
}
