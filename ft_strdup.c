/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschiete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:17:53 by pschiete          #+#    #+#             */
/*   Updated: 2024/10/10 16:21:42 by pschiete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(s1) +1);
	if (!string)
		return (NULL);
	while (s1[i] != 0)
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = 0;
	return (string);
}
