/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shbi <shbi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 05:12:12 by shbi              #+#    #+#             */
/*   Updated: 2022/11/20 13:30:05 by shbi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	error_msg(const char *error_msg)
{
	ft_putstr_fd("minishell: ", 2);
	ft_putstr_fd((char *)error_msg, 2);
}