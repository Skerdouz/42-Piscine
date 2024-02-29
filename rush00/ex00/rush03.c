/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadiba-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:19:56 by jadiba-b          #+#    #+#             */
/*   Updated: 2024/02/11 17:50:59 by habouda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_ligne(int *x, char p, char y, char z)
{
	int	longueur;

	longueur = 0;
	ft_putchar(p);
	while (longueur < *x - 2)
	{
		ft_putchar(y);
		longueur++;
	}
	ft_putchar(z);
	ft_putchar('\n');
}

void	ft_un(int *x, int *y)
{
	int	longueur;

	longueur = 0;
	if (*x == 1 && *y > 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
		while (longueur < *y - 2)
		{
			ft_putchar('B');
			ft_putchar('\n');
			++longueur;
		}
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{
		ft_ligne(x, 'A', 'B', 'C');
	}
}

void	rush(int *x, int *y)
{
	int	longueur;

	longueur = 0;
	if (*x > 1 && *y > 1)
	{
		ft_ligne(x, 'A', 'B', 'C');
		while (longueur < *y - 2)
		{
			ft_ligne(x, 'B', ' ', 'B');
			++longueur;
		}
		ft_ligne(x, 'A', 'B', 'C');
	}
	if ((*x == 1 && *y > 1) || (*x > 1 && *y == 1))
	{
		ft_un(x, y);
	}
	if (*x == 1 && *y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}
