/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:21:49 by mouad             #+#    #+#             */
/*   Updated: 2024/11/04 09:41:56 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const  *s1,char const  *s2)
{
    int i;
    int j;

     if(!s1 || !s2)
    {
        return NULL;
    }
    int total_length = ft_strlen(s1) + ft_strlen(s2);
    char    *s_concatenate = malloc(total_length + 1);

    if(!s_concatenate)
    {
        return NULL;
    }

    i = 0;
    while(s1[i])
    {
        s_concatenate[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j])
    {
        s_concatenate[i + j] = s2[j];
        j++;
    }
    s_concatenate[i + j] = '\0';
    return s_concatenate;
}