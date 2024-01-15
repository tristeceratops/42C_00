/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:15:19 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 14:15:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <unistd.h>
#include    <stdio.h>

int    ft_strlen(char *str)
{
    int res;

    res = 0;
    while(*str != '\0')
    {
        str++;
        res++;
    }

    return res;
}

int     main(void)
{
    int length;

    length = ft_strlen("12345 789");
    printf("%d", length);

}