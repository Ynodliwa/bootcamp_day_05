/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynodliwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:23:39 by ynodliwa          #+#    #+#             */
/*   Updated: 2020/06/23 11:53:32 by ynodliwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char		*ft_strcpy(char *dest, char *src);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int main () 
{
	char c[20];
   	int i;
	char d[20]	= "Yanga Thinks Code";
		ft_strcpy(c, d);
		i = 0;
		while (c[i] != '\0')
		{
			ft_putchar(c[i]);
			i++;
		}

return 0;
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
