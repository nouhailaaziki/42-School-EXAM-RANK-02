/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:06:52 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/04 17:50:50 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	counter(char c)
{
	int		i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = "abcdefghijklmnopqrstuvwxyz";
	str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (str1[i] && str2[i])
	{
		if (c == str1[i] || c == str2[i])
			return (i);
		i++;
	}
	return (0);
}

void	checker(char c)
{
	char	*str1;
	char	*str2;
	int		i;
	int		n;

	str1 = "zyxwvutsrqponmlkjihgfedcba";
	str2 = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	i = 0;
	n = counter(c);
	if (c >= 'a' && c <= 'z')
	{
		c = str1[n];
		write(1, &c, 1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = str2[n];
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z')
			|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				checker(argv[1][i]);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
