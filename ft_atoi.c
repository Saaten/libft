/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayeghia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:53:02 by sayeghia          #+#    #+#             */
/*   Updated: 2026/02/07 19:25:29 by sayeghia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 0;
	if (*nptr != '\0')
	{
		while ((*nptr == 32) || ((*nptr <= 13) && (*nptr >= 9)))
			nptr++;
		if (*nptr == '-')
		{
			sign = 1;
			nptr++;
		}
		else if (*nptr == '+')
			nptr++;
		while (*nptr >= 48 && *nptr <= 57)
		{
			result = result * 10 + (*nptr - '0');
			nptr++;
		}
	}
	if (sign == 1)
		return (-1 * result);
	return (result);
}
