/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:50:04 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/01 21:59:59 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] && little[j])
		{
			if (big[i + j] == little[j])
				j++;
			else
				break ;
		}
		if (little [j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
