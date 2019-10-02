/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 23:07:40 by mbrella           #+#    #+#             */
/*   Updated: 2019/09/05 20:27:49 by mbrella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char	*tmp;

	if (!f || !s || !(*s))
		return ;
	tmp = s;
	while (*tmp)
	{
		f(tmp);
		tmp++;
	}
}
