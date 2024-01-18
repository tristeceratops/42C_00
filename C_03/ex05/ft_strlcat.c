/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:34:34 by marvin            #+#    #+#             */
/*   Updated: 2024/01/18 10:34:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int dest_len = 0;
    unsigned int src_len = 0;

    while (dest[dest_len] != '\0' && dest_len < size)
        dest_len++;

    while (src[src_len] != '\0' && dest_len + src_len + 1 < size) {
        dest[dest_len + src_len] = src[src_len];
        src_len++;
    }

    if (dest_len < size)
        dest[dest_len + src_len] = '\0';

    return dest_len + src_len;
}

int main(void)
{
    char first_str[10] = "Hello, ";
    char second_str[] = "world! This is a test for 42 !";

    printf("Before ft_strncat:\n");
    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);

    ft_strlcat(first_str, second_str, 10);

    printf("\nAfter ft_strncat:\n");
    printf("Concatenated String: %s\n", first_str);

    return 0;
}