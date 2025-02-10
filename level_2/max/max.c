/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:51:16 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/10 19:11:03 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				tmp;

	if (len == 0)
		return (0);
	i = 1;
	tmp = tab[0];
	while (i < len)
	{
		if (tab[i] > tmp)
			tmp = tab[i];
		i++;
	}
	return (tmp);
}
