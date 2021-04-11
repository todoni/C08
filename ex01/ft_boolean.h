/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:41:16 by sohan             #+#    #+#             */
/*   Updated: 2021/04/11 22:05:03 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FT_BOOLEAN_H__
# define	__FT_BOOLEAN_H__

# include	<unistd.h>

typedef	int	t_bool;

# define	TRUE	1
# define	FALSE	0
# define	SUCCESS	0

# define	EVEN(nbr)	nbr % 2 == 0

# define	EVEN_MSG	"I have an even number of arguments.\n"
# define	ODD_MSG	"I have an odd number of arguments.\n"

#endif
