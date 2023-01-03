/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <yelousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:17:59 by shbi              #+#    #+#             */
/*   Updated: 2023/01/03 05:38:58 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr(const char *s, int c)
{
	char	*ps;

	ps = (char *)s;
	while (*ps)
	{
		if (*ps == (char)c)
			return (1);
		ps++;
	}
	if (*ps == (char)c)
		return (1);
	return (0);
}
