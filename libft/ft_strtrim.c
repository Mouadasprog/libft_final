/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:41:40 by mouad             #+#    #+#             */
/*   Updated: 2024/11/04 10:50:22 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const  *s1,char const  *set)
{
    if(!s1)
    {
        return NULL;
    }
    if(!set)
    {
        return (char *)s1;
    }
    int string_length = ft_strlen(s1);
    int start = 0;
    int end = string_length - 1;
    while(s1[start] && ft_strchr(set,s1[start]))
    {
        start++;
    }
    while(s1[end] && ft_strchr(set,s1[end]))
    {
        end--;
    }
    int new_length = end - start + 1;
    if(new_length <= 0)
    {
        return ft_strdup("");
    }
    char    *trimmed = (char *)malloc(new_length + 1);
    if(!trimmed)
    {
        return NULL;
    }
    ft_strlcpy(trimmed,s1 + start,new_length);
    return trimmed;
}