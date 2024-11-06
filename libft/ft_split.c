/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:53:31 by mouad             #+#    #+#             */
/*   Updated: 2024/11/06 12:56:41 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int word_count(const char *str, char delimiter) {
    int count = 0;
    while (*str) {
        while (*str == delimiter) 
            str++;
        if (*str) {  // If not end of string, there's a word
            count++;
            while (*str && *str != delimiter)  // Skip word
                str++;
        }
    }
    return count;
}

// Helper function to copy a word into a new string
static char *copy_word(const char *str, int start, int end) {
    char *word = (char *)malloc(sizeof(char) * (end - start + 1));
    if (!word)
        return NULL;
    int i = 0;
    while (start < end)
        word[i++] = str[start++];
    word[i] = '\0';
    return word;
}

// The ft_split function
char **ft_split(const char *str, char delimiter) {
    if (!str)
        return NULL;

    int word_count_result = word_count(str, delimiter);
    char **result = (char **)malloc(sizeof(char *) * (word_count_result + 1));
    if (!result)
        return NULL;

    int i = 0;
    int start = 0;
    int end = 0;
    while (str[end]) {
        // Skip delimiters
        while (str[end] == delimiter)
            end++;

        // Find the start of the next word
        start = end;

        // Move end to the end of the word
        while (str[end] && str[end] != delimiter)
            end++;

        // If a word was found, copy it
        if (end > start) {
            result[i] = copy_word(str, start, end);
            if (!result[i]) {
                // Handle memory allocation failure by freeing previously allocated memory
                while (i > 0)
                    free(result[--i]);
                free(result);
                return NULL;
            }
            i++;
        }
    }

    // Null-terminate the array of strings
    result[i] = NULL;
    return result;
}
