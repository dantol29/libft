/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:06:43 by marvin            #+#    #+#             */
/*   Updated: 2023/11/03 09:06:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *str, int c, size_t n)
{
    const unsigned char *s1;
    unsigned char t;
    size_t i;

    i = 0;
    s1 = str;
    t = c;
    while (i < n)
    {
        if (s1[i] == t)
            return ((void *)(s1 + i));
        i++;
    }
    return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    const char str[] = "https://www.42.com";
    const char ch = '.';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str));

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}*/