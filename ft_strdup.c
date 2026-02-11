/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:06:15 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/07 21:16:12 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
