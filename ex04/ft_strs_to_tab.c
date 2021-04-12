/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:00:11 by sohan             #+#    #+#             */
/*   Updated: 2021/04/12 21:31:02 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char				*ft_strdup(char *str)
{
	char	*copy;
	int		len;

	len = ft_strlen(str);
	copy = (char *)malloc(len * sizeof(char) + 1);
	if (copy == 0)
		return (0);
	while (*str)
	{
		*copy = *str;
		copy++;
		str++;
	}
	*copy = '\0';
	copy -= len;
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*argument;
	int			i;

	i = 0;
	argument = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (argument == 0)
		return (0);
	while (i < ac)
	{
		argument[i].size = ft_strlen(av[i]);
		argument[i].str = av[i];
		argument[i].copy = ft_strdup(av[i]);
		i++;
	}
	argument[i].size = 0;
	argument[i].str = 0;
	argument[i].copy = 0;
	return (argument);
}
