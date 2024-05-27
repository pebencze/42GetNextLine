/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:43:34 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/09 15:30:24 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

ssize_t	ft_strlen(char *str)
{
	ssize_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	char			*str;

	str = (char *)s;
	uc = c;
	if (!str)
		return (NULL);
	while (*str != uc && *str)
		str++;
	if (*str == uc)
		return (str);
	return (NULL);
}

char	*ft_strdup(char *str)
{
	char	*duplicate;
	ssize_t	i;

	if (!str)
		return (NULL);
	duplicate = (char *)malloc(ft_strlen(str) + 1);
	if (!duplicate)
		return (NULL);
	i = 0;
	while (str[i])
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

char	*ft_strjoin(char *s1, char *s2)
{
	ssize_t	i;
	char	*new;

	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
	{
		if (s1)
			free(s1);
		return (NULL);
	}
	i = 0;
	if (s1)
	{
		while (*s1)
			new[i++] = *s1++;
		free(s1 - i);
	}
	if (s2)
	{
		while (*s2)
			new[i++] = *s2++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_substr(char *s, unsigned int start, ssize_t len)
{
	char	*substr;
	ssize_t	i;

	i = 0;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
