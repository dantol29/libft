/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:09:51 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 17:09:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    d = dest;
    s = src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    const char src[50] = "https://www.tutorialspoint.com";
    char dest[50];
    strcpy(dest, "Heloooo!!");
    printf("Before memcpy dest = %s\n", dest);
    memcpy(dest, src, strlen(src) + 1);
    printf("After memcpy dest = %s\n", dest);

    return (0);
}*/