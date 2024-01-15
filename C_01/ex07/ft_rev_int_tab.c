/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:30:04 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 14:30:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int     array_int[size];
    int     i;

    tab += size - 1;
    i = 0;
    while(i < size)
    {
        array_int[i] = *tab;
        tab --;
        i++;
    }

    i = 0;
    tab++;

    while (i < size)
    {
        *tab = array_int[i];
        tab++;
        i++;
    }
}

int     main(void)
{
    int     array_int_test[8];
    int     i;

    array_int_test[0] = 1;
    array_int_test[1] = 7;
    array_int_test[2] = 45;
    array_int_test[3] = 487;
    array_int_test[4] = -41;
    array_int_test[5] = 1487;
    array_int_test[6] = -147;
    array_int_test[7] = 7;
    i = 0;

    ft_rev_int_tab(array_int_test, 8);

    while(i < 8)
    {
        printf("%d\n", array_int_test[i]);
        i++;
    }
}