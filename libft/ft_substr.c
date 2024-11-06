/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:34:44 by mouad             #+#    #+#             */
/*   Updated: 2024/11/04 09:21:06 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char   *s,unsigned int start,size_t len)
{
    size_t  i;

    if(!s)
    {
        return NULL;
    }

    char    *allocated = malloc(len + 1);

    if(!allocated)
    {
        return NULL;
    }

    size_t s_len = ft_strlen(s);

    if(start >= s_len)
    {
        return ft_strdup("");
    }

    if(len > s_len - start)
    len = s_len - start;
    i = 0;
    while(i < len)
    {
        allocated[i] = s[start + i];
        i++;
    }

    allocated[i] = '\0';

    return allocated;
}