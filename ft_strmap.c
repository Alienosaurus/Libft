/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 09:47:24 by adenece           #+#    #+#             */
/*   Updated: 2016/02/23 09:47:28 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*new;

	i = 0;
	new = ft_strnew(ft_strlen(s));
	ft_strcpy(new, s);
	while (new[i])
	{
		new[i] = f(new[i]);
		i++;
	}
	return (new);
}
