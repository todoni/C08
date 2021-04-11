/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:28:25 by sohan             #+#    #+#             */
/*   Updated: 2021/04/12 01:19:49 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int		check_exception(int nb)
{
	if (nb == -2147483648)
	{
		nb = nb + 1;
		nb = -nb;
		write(1, "-", 1);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	nbr[10];
	int		i;
	int		init;

	init = nb;
	nb = check_exception(nb);
	i = 0;
	while (nb != 0)
	{
		nbr[i] = (nb % 10) + 48;
		nb = nb / 10;
		i++;
	}
	if (init == -2147483648)
	{
		nbr[0] = nbr[0] + 1;
	}
	while (i >= 1)
	{
		write(1, &nbr[i - 1], 1);
		i--;
	}
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while(par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
