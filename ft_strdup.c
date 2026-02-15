/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:06:15 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/15 22:57:16 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strdup(const char *s)
{
	size_t	l;
	char	*copy;

	l = strlen(s);
	copy = malloc(l + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, l + 1);
	return (copy);
}
