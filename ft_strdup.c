/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenece <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 09:46:14 by adenece           #+#    #+#             */
/*   Updated: 2016/04/09 22:11:01 by adenece          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s)
{
	char	*new;

	if (!s || !(new = ft_strnew(ft_strlen(s))))
				return (NULL);
		return (ft_strcpy(new, s));
}
