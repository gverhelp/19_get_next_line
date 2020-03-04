/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gverhelp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 13:04:33 by gverhelp          #+#    #+#             */
/*   Updated: 2019/12/09 13:40:32 by gverhelp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		a;
	int		b;
	char	*str;

	a = 0;
	b = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	str = malloc((size + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a + b] = s2[b];
		b++;
	}
	str[a + b] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	int		a;
	char	*s;

	a = 0;
	if (s1 == NULL)
		return (ft_strdup(""));
	s = malloc((ft_strlen(s1) + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);
	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == (unsigned char)c)
			return ((char*)&s[a + 1]);
		a++;
	}
	if (c == 0)
		return ((char*)&s[a]);
	return (NULL);
}
