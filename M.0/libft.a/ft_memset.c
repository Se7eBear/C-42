/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 04:55:00 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/22 05:32:25 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dest, int c, size_t count)
{
   unsigned char *ptr;
   size_t i;

   ptr = (unsigned char)dest;
   i = 0;
   while (i < count)
   {
        ptr[i] = (unsigned char *)c;
        i++;
   }
   return (dest);
}