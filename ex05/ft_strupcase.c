/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynodliwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:35:28 by ynodliwa          #+#    #+#             */
/*   Updated: 2020/06/24 11:40:25 by ynodliwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strupcase(char *str);

int main()
{
	char str[10] = "HellOworl";
	char *x;
	x = ft_strupcase(str);
	write(1, x, 10);
	return 0;
}

char *ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += ('A' - 'a');
		}
		i++;
	}
	return str;
}
