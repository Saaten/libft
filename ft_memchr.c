/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 22:00:17 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/06 22:14:21 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c1;
	size_t			i;

	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s == c1)
			return (s);
		i++;
		s++;
	}
	return (NULL);
}
