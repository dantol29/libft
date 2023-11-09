/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:54:50 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 20:54:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    unsigned char t;
    size_t i;

    d = dest;
    s = src;
    t = c;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        if (d[i] == t)
            return ((void *)(d + i + 1));
        i++;
    }
    return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    char source[] = "Hello, World!";
    char destination[20];
    char *result = ft_memccpy(destination, source, 'o', sizeof(source));

    if (result != NULL)
    {
        printf("Found 'o' at position: %ld\n", result - destination);
    }
    else
    {
        printf("The character 'o' was not found.\n");
    }
}*/