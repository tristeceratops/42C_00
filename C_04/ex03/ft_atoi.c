/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:50:48 by marvin            #+#    #+#             */
/*   Updated: 2024/01/18 14:50:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int my_isdigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int isSpaceCharacter(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r');
}

int isSignCharacter(char ch) {
    return (ch == '+' || ch == '-');
}

int ft_atoi(char *str) {
    int result = 0;
    int sign = 1;  // 1 for positive, -1 for negative
    int hasSign = 0;

    while (isSpaceCharacter(*str)) {
        str++;
    }

    while (isSignCharacter(*str)) {
        if (*str == '-') {
            hasSign++;
            sign *= -1;
        }
        str++;
    }

    while (my_isdigit(*str)) {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}

#include <stdio.h>

int main() {
    char testStr[] = " ---+--+1234ab567";
    int result = ft_atoi(testStr);
    printf("%d\n", result);

    return 0;
}
