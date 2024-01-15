/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:55:13 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 11:55:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include    <stdio.h>
void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int     main(void)
{
    int test;
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;

    test = 0;
    p1 = &test;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    p6 = &p5;
    p7 = &p6;
    p8 = &p7;
    printf("nb = %d\n", test);
    ft_ultimate_ft(&p8);
    printf("nb = %d\n", test);
}