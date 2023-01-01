/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shbi <shbi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:40:25 by shbi              #+#    #+#             */
/*   Updated: 2022/12/25 18:39:14 by shbi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		c;
	t_list	*pl;

	c = 0;
	pl = lst;
	while (pl)
	{
		pl = pl->next;
		c++;
	}
	return (c);
}