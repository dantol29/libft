/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:31:14 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 13:31:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strnstr(const char *s1, const char *s2, size_t len)
{
    int i;
    int j;
    int len_s2;

    len_s2 = strlen(s2);
    i = 0;
    while (s1[i] && i < len)
    {
        if (s1[i] == s2[0])
        {
            j = 0;
            while (s1[i] == s2[j] && i < len)
            {
                i++;
                j++;
            }
            if (len_s2 == j)
                return ((char *)(s1 + i - j));
        }
        i++;
    }
    return ((void *)0);
}
/*
#include <stdio.h>
int main()
{
    printf("%s\n", strnstr("noWayItWorks", "Way", 2));
}*/