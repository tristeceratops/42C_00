/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:07:56 by marvin            #+#    #+#             */
/*   Updated: 2024/01/15 18:07:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char*  strncpy(char *dest, const char *src, size_t n)
 {
    size_t i;

    for (i = 0 ; i < n && src[i] != '\0' ; i++)
    {
        dest[i] = src[i];
    }

    for ( ; i < n ; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}