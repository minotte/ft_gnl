/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nminotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:33:43 by nminotte          #+#    #+#             */
/*   Updated: 2022/11/18 11:33:46 by nminotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (char)c;
	while (s && s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (0);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	if (!src)
		return (0);
	while (src[i] != '\0')
		i++;
	return (i);
}

int	ft_strlnn(char *src)
{
	int	i;

	i = 0;
	if (src[0] == '\n' && src[1] == '\0')
		return (1);
	while (src[i] != '\0')
	{
		if (src[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	return (i);
}

void	*ft_calloc(int nmemb, int size)
{
	char	*tab;
	int		i;

	if (nmemb == 0 || size == 0)
	{
		tab = malloc(0);
		if (!tab)
			return (NULL);
		return (tab);
	}
	if (((nmemb * size) / size) != nmemb)
		return (0);
	tab = malloc(nmemb * size);
	if (!tab)
		return (0);
	i = 0;
	while (i < size)
	{
		tab[i] = '\0';
		i ++;
	}
	return (tab);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2)
	{
		free(s1);
		return (NULL);
	}
	str = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	free (s1);
	return (str);
}
