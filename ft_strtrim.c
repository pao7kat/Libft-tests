/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschiete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:14:46 by pschiete          #+#    #+#             */
/*   Updated: 2024/10/23 13:03:30 by pschiete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr;
	int		start;
	int		end;

	start = 0;
	if (s1[start] == 0)
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (ft_strchr (set, s1[start]))
		start++;
	while (ft_strchr (set, s1[end]))
		end--;
	ptr = ft_substr (s1, start, (end - start) + 1);
	return (ptr);
}
