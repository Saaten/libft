/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:09:56 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/15 22:39:26 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = NULL;
	while (*s)
	{
		if (*s == (char) c)
			i = (char *) s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *) s);
	return (i);
}
