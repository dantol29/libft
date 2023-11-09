/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:49:11 by marvin            #+#    #+#             */
/*   Updated: 2023/11/02 17:49:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *str1, const void *str2, size_t n)
{
    unsigned char *s1;
    const unsigned char *s2;
    size_t i;

    i = 0;
    s1 = str1;
    s2 = str2;
    if (s1 == s2)
        return (s1);
    while (i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    return (s1);
}
/*
#include <stdio.h>
int main()
{
    char dest[] = "oldstring";
    const char src[] = "newstring";

    printf("Before memmove dest = %s, src = %s\n", dest, src);
    memmove(dest, src, 9);
    printf("After memmove dest = %s, src = %s\n", dest, src);

    char str[] = "Hello, World!";
    char buffer[13];

    memmove(buffer, str, 13);
    printf("Using memmove: %s\n", buffer);
}*/