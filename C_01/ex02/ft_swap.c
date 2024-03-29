/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:23:58 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 13:23:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <stdio.h>

void    ft_swap(int *a, int *b)
{
    int     c;

    c = *a;
    *a = *b;
    *b = c;
}

int     main(void)
{
    int     a;
    int     b;

    a = 17;
    b = 5;

    printf("a = %d b = %d\n", a, b);

    ft_swap(&a, &b);

    printf("a = %d b = %d\n", a, b);
}