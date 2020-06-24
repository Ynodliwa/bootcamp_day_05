/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynodliwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 11:45:49 by ynodliwa          #+#    #+#             */
/*   Updated: 2020/06/24 11:46:15 by ynodliwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strlowcase(char *str);

int main()
{
	char str[10] = "HellOworl";
	char *x;
	x = ft_strlowcase(str);
	write(1, x, 10);
	return 0;
}

char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= ('A' - 'a');
		}
		i++;
	}
	return str;
}
