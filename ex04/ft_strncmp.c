/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynodliwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:30:12 by ynodliwa          #+#    #+#             */
/*   Updated: 2020/06/23 16:31:38 by ynodliwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

char *ft_strncmp(char *dest, char *src, unsigned int n);

int main()
{
   char test1[256] = "HelloWorld";
   char *test2 = strncpy(test1,"uio",5);
   write(1,test2,1);
   write(1,"\n",1);
}	

char *ft_strncmp(char *dest, char *src, unsigned int n)
{
   unsigned int i;
   i = 0;

   while(src[i] != '\0' && i < n )
   {
      dest[i] = src[i];
	  i++;   
   }	  
  if(i < n && src[i] == '\0')
  {
      while(dest[i] != '\0')
	  {
	      dest[i] = '\0';
		  ++i;
	  }	  
  
  }	  
  return (dest);
}	
