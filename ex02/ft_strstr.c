/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynodliwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:25:18 by ynodliwa          #+#    #+#             */
/*   Updated: 2020/06/23 16:26:24 by ynodliwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

char *ft_strstr(char *str, char *to_find);


int main()
{
  char *n;
  char str[20] = "YangaThinksCode";
  char to_find[3] = "th";

  n = ft_strstr(str,to_find);
  write(1, n,1);
  write(1,"\n",1);

  return 0;  
}

char *ft_strstr(char *str, char *to_find)
{
  int i;
  int j;

  i = 0;

  if(to_find[0] == '\0')
	    return (str);
  while(str[i] != '\0')
  {
      j = 0;
           while(str[i + j] != '\0' && str[i + j] == to_find[j])
		   {
		         if(to_find[j + 1] == '\0' )
					  return (&str[i]);
				 ++j;
		   }   
        i++; 
  }	  

  return 0;

}
