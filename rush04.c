/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanin <vsanin@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:38:30 by vsanin            #+#    #+#             */
/*   Updated: 2024/03/03 20:27:52 by vsanin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printline(int i, int j, int x, int y)
{
	if (i > 1 && i != y && j != 1 && j != x)
		ft_putchar(' ');
	else
	{
		if ((i == 1 && j == 1) || (j != 1 && i != 1 && i == y && j == x))
			ft_putchar('A');
		else if ((i == 1 && j == x) || (i == y && j == 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
}

int	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "Error: enter size for Rush Subject 04.\n", 40);
		return (1);
	}
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			printline(i, j, x, y);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
