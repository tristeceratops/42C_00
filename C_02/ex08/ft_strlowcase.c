/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:00:11 by marvin            #+#    #+#             */
/*   Updated: 2024/01/17 10:00:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}

int		main(void)
{
	char	str[] = "Salut iCI ON 42 test//\n";

	printf("%s", str);

	ft_strlowcase(str);

	printf("%s", str);
}