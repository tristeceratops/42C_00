/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:50:43 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 13:50:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int     c;

    c = *a;
    *a = *a / *b;
    *b = c % *b;
}

int     main(void)
{
    int     a;
    int     b;

    a = 17;
    b = 5;
    printf("a = %d b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("a = %d b = %d\n", a, b);
}