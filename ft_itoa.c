/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschiete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:45:14 by pschiete          #+#    #+#             */
/*   Updated: 2024/10/12 18:57:23 by pschiete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizenum(long number)
{
	int	i;

	i = 1;
	if (number < 0)
	{
		i++;
		number = number * -1;
	}
	while (number > 9)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		size;
	long	long_n;

	long_n = (long)n;
	size = ft_sizenum(long_n);
	string = (char *)malloc(sizeof(char) * size +1);
	if (!string)
		return (NULL);
	string[size] = '\0';
	if (long_n < 0)
	{
		string[0] = '-';
		long_n = long_n * -1;
	}
	if (long_n == 0)
		string[0] = '0';
	while (long_n > 9)
	{
		string[--size] = (long_n % 10) + '0';
		long_n /= 10;
	}
	if (long_n > 0)
		string [--size] = long_n + '0';
	return (string);
}
