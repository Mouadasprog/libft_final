/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:27:37 by mouad             #+#    #+#             */
/*   Updated: 2024/11/03 14:11:09 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		length_dest;
	int		length_src;
	int		total_length;

	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	total_length = length_dest + length_src;
	i = 0;
	if (!dest || !src)
	{
		return (0);
	}
	while (i < size)
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (total_length);
}
