/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynodliwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:28:12 by ynodliwa          #+#    #+#             */
/*   Updated: 2020/06/23 16:29:12 by ynodliwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
   int i;
   i = 0;
   char src[20] = "YangaThinksCode";
   char dest[20];
   ft_strcpy(dest,src);
  	   

        write(1,dest,1);
        		 
   write(1,"\n",1);
   return 0;  
}

char *ft_strcpy(char *dest, char *src)
{
   int i;
   i = 0;

   while(src[i] != '\0')
   {
      dest[i] = src[i];
	  ++i;
   }	  
   dest[i] = '\0';
   return (dest);  

}
