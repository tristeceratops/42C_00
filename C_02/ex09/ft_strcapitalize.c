/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:48:45 by marvin            #+#    #+#             */
/*   Updated: 2024/01/17 10:48:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		is_word_started;

	is_word_started = 0;
	
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90)||(*str >= 97 && *str <= 122))
		{
			if (*str >= 97 && *str <= 122)
			{
				if (!is_word_started)
				{
					*str = *str - 32;
				}
			}
			
			if (*str >= 65 && *str <= 90)
			{
				if(is_word_started)
				{
					*str = *str + 32;
				}
			}
			is_word_started = 1;
		}
		else
		{
			is_word_started = 0;
		}
		str++;
	}
	return (str);
}

int		main(void)
{
	char	str[] = "salut, commenT Tu vas ? 42mots quarAnte-deux; cinquante+et+un\n";

	printf("%s", str);

	ft_strcapitalize(str);

	printf("%s", str);
}