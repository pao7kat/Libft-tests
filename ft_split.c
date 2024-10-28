/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschiete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:26:12 by pschiete          #+#    #+#             */
/*   Updated: 2024/10/22 16:32:52 by pschiete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_countwords(const char *str, char c);
static char	**ft_free(char **str, int i);
static int	ft_wordlen(const char *tr, char c);

static char	**ft_free(char **str, int i)
{
	while (--i >= 0)
		free (str[i]);
	free(str);
	return (NULL);
}

static int	ft_countwords(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i +1] == c || str[i + 1] == '\0'))
			words ++;
		i++;
	}
	return (words);
}

static int	ft_wordlen(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_split(const char *str, char c)
{
	char	**array;
	int		i;
	int		start;
	int		words;

	if (!str)
		return (NULL);
	words = ft_countwords(str, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		while (str[start] == c)
			start++;
		array[i] = ft_substr(str, start, ft_wordlen(str + start, c));
		if (!array[i])
			return (ft_free(array, i));
		start += ft_wordlen(str + start, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
