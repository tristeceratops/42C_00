/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:40:57 by marvin            #+#    #+#             */
/*   Updated: 2024/01/17 14:40:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int ret_value = 0;

    while (*s1 || *s2)
    {
        if (*s1 != *s2)
        {
            ret_value = *s1 - *s2;
            break;
        }
        s1++;
        s2++;
    }
    return ret_value;
}

int main(void)
{
    char first_str[] = "Test";
    char second_str[] = "Testhaha";

    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);
    printf("Return value of strcmp(): %d\n", ft_strcmp(first_str, second_str));

    return 0;
}
