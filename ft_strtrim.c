/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrima <mhrima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:03:19 by mhrima            #+#    #+#             */
/*   Updated: 2022/10/13 11:01:15 by mhrima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	includes(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	start_end(char Case, char const *set, char const *s1)
{
	size_t	i;

	if (Case == 's')
	{
		i = 0;
		while (includes(set, s1[i]))
			i++;
	}
	if (Case == 'e')
	{
		i = ft_strlen(s1) - 1;
		while (includes(set, s1[i]))
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		s;
	int		e;
	char	*res;

	s = start_end('s', set, s1);
	e = start_end('e', set, s1);
	if (s > e)
		return (ft_calloc(1, 1));
	res = (char *)malloc((e - s + 2) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < (unsigned)e - (unsigned)s + 1)
	{
		res[i] = s1[s + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
