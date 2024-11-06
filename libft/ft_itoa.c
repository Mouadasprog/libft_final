/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:12:48 by mouad             #+#    #+#             */
/*   Updated: 2024/11/06 15:19:21 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n) {
    char *str = malloc(12);  // Allocate memory, 12 chars for int limits + sign + '\0'
    int i = 0;
    int is_negative = 0;

    // Handle 0 case
    if (n == 0) {
        str[i++] = '0';
    } else {
        // Check for negative number
        if (n < 0) {
            is_negative = 1;
            n = -n;
        }

        // Convert each digit
        while (n != 0) {
            str[i++] = (n % 10) + '0';  // Get last digit and convert to char
            n /= 10;
        }

        // Add minus sign for negative numbers
        if (is_negative) {
            str[i++] = '-';
        }
    }

    str[i] = '\0';  // Null-terminate the string

    // Reverse the string
    for (int j = 0; j < i / 2; ++j) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    return str;
}