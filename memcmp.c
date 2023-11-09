/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:47:08 by marvin            #+#    #+#             */
/*   Updated: 2023/11/03 09:47:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *str1, const void *str2, size_t n)
{
    const unsigned char *s1;
    const unsigned char *s2;
    size_t i;

    s1 = str1;
    s2 = str2;
    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
/*
#include <stdio.h>
int main()
{
    printf("%d", memcmp("hella", "hellb", 4));
}*/