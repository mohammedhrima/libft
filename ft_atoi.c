/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrima <mhrima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:41:16 by mhrima            #+#    #+#             */
/*   Updated: 2022/10/14 16:21:15 by mhrima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

int	the_sign(char c, int *i)
{
	if (c == '+' || c == '-')
	{
		(*i)++;
		if (c == '-')
			return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	sign;
	long long	num;

	i = 0;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = the_sign(str[i], &i);
	while (str[i] <= '9' && str[i] >= '0')
	{
		num = num * 10 + sign * (str[i] - '0');
		if (sign == 1 && str[i + 1] <= '9' && str[i + 1] >= '0'
			&& num > (INT64_MAX - sign * (str[i + 1] - '0')) / 10)
			return (-1);
		if (sign == -1 && str[i + 1] <= '9' && str[i + 1] >= '0'
			&& num < (INT64_MIN - sign * (str[i + 1] - '0')) / 10)
			return (0);
		i++;
	}
	return ((int)num);
}