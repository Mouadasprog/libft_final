/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:20:10 by mouad             #+#    #+#             */
/*   Updated: 2024/11/03 14:17:26 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	size_t size;
	size_t i;
	size = ft_strlen(s);
	char *duplicate = malloc(size + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';

	return duplicate;
}
