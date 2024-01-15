/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:23:58 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 13:23:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <stdio.h>

void    ft_div_mod(int *a, int *b, int *div, int *mod)
{
    *div = *a / *b;
    *mod = *a % *b;
}

int     main(void)
{
    int     a;
    int     b;
    int     div;
    int     mod;

    a = 17;
    b = 5;
    div = 0;
    mod = 0;

    printf("a = %d b = %d\n div = %d mod = %d\n", a, b, div, mod);

    ft_div_mod(&a, &b, &div, &mod);

    printf("a = %d b = %d\n div = %d mod = %d\n", a, b, div, mod);
}