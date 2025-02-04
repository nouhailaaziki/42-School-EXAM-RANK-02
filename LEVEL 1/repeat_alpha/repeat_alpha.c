/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:39:04 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/04 10:38:58 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(char c)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = "abcdefghijklmnopqrstuvwxyz";
	str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while (str1[i] && str2[i])
	{
		if (c == str1[i] || c == str2[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 97 && argv[1][i] <= 122)
			|| (argv[1][i] >= 65 && argv[1][i] <= 90))
			{
				c = checker(argv[1][i]);
				while (c--)
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
