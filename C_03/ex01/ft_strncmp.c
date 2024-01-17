/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:15:33 by marvin            #+#    #+#             */
/*   Updated: 2024/01/17 16:15:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    int ret_value = 0;

    while ((n > 0) && (*s1 || *s2))
    {
        if (*s1 != *s2)
        {
            ret_value = *s1 - *s2;
            break;
        }
        s1++;
        s2++;
        n--;
    }
    return ret_value;
}

int main(void)
{
    char first_str[] = "Test";
    char second_str[] = "Tass";

    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);
    printf("Return value of strncmp(): %d\n", ft_strncmp(first_str, second_str, 3));

    return 0;
}
