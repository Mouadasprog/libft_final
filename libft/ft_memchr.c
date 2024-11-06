/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:18:44 by mouad             #+#    #+#             */
/*   Updated: 2024/11/02 11:35:10 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *search = (unsigned char *)s;
	size_t i;
	i = 0;
	while (i < n)
	{
		if (search[i] == (unsigned char)c)
		{
			return ((unsigned char *)&search[i]);
		}
		i++;
	}
	return (NULL);
}