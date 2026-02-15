/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:14:06 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/14 18:33:03 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*s1;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s1 = malloc(len +1);
	if (!s1)
		return (NULL);
	s1[len] = '\0';
	while (len > 0)
	{
		len--;
		s1[len] = f(len, s[len]);
	}
	return (s1);
}
