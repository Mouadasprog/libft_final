/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:13:25 by mouad             #+#    #+#             */
/*   Updated: 2024/11/06 10:34:24 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char  *s,char (*f)(unsigned int,char))
{
    if(!s || !f)
    {
        return NULL;
    }
    unsigned int    i = 0;
    
    while(s[i])
    {
        i++;
    }
    char    *new_str = (char *)malloc(sizeof(char) * (i + 1));
    if(!new_str)
    {
        return NULL;
    }
    i = 0;
    while(s[i])
    {
        new_str[i] = f(i,s[i]);
        i++;
    }
    new_str[i] = '\0';
    return new_str;

}