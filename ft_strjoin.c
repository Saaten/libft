/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:26:26 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/15 22:58:15 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	lens1;
	size_t	lens2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	p = malloc(lens1 + lens2 + 1);
	if (!p)
		return (NULL);
	while (i < lens1)
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < lens2)
	{
		p[lens1 + i] = s2[i];
		i++;
	}
	p[lens1 + i] = '\0';
	return (p);
}
