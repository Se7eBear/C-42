/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 22:10:25 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/22 22:25:33 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *ptr;
    size_t  i;
    
    if (!dest && !src)
        return (dest);

    ptr = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        ptr[i] = ((const unsigned char *)src)[i];
        i++;    
    }
    return (dest);
}