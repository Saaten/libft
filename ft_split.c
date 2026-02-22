/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:59:43 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/22 21:46:50 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
			count++;
		while (*s && (*s != c))
			s++;
	}
	return (count);
}

size_t	llenn(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

void	fill(char **res, char const *s, char c, int *i)
{
	size_t	len;

	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = llenn(s, c);
			res[*i] = ft_substr(s, 0, len);
			if (!res[*i])
			{
				while (*i > 0)
					free(res[--(*i)]);
				free(res);
				*i = -1;
				return ;
			}
			s += len;
			(*i)++;
		}
	}
	res[*i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	word = counter(s, c);
	res = malloc(sizeof(char *) * (word + 1));
	if (!res)
		return (NULL);
	i = 0;
	fill(res, s, c, &i);
	if (i == -1)
		return (NULL);
	return (res);
}
