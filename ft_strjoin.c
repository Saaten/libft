/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 21:16:21 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/22 21:16:24 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	p = malloc(lens1 + lens2 + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, lens1);
	ft_memcpy(&p[lens1], s2, lens2);
	p[lens1 + lens2] = '\0';
	return (p);
}
