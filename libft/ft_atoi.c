/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:41:26 by mouad             #+#    #+#             */
/*   Updated: 2024/11/02 15:55:21 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	return (c == '\n' || c == '\v' || c == '\f' || c == '\t' || c == '\r'
		|| c == ' ');
}

int	ft_atoi(char *str)
{
	size_t i;
	unsigned long int results = 0;
	int sign = 1;
	i = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		results = results * 10 + (str[i] - '0');
		i++;
	}
	return (results * sign);
}