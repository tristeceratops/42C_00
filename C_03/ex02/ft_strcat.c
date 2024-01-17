/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:27:19 by marvin            #+#    #+#             */
/*   Updated: 2024/01/17 17:27:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, const char *src)
{
    char *original_dest = dest;

    while (*dest)
        dest++;

    while (*src)
    {
        *dest++ = *src++;
    }

    // Ajouter le caractère nul à la fin
    *dest = '\0';

    return original_dest;
}

int main(void)
{
    char first_str[20] = "Hello, ";
    char second_str[] = "world!";

    printf("Before ft_strncat:\n");
    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);

    ft_strcat(first_str, second_str);  // Concatenate only 4 characters

    printf("\nAfter ft_strncat:\n");
    printf("Concatenated String: %s\n", first_str);

    return 0;
}
