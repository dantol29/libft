/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:26:01 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 10:26:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcpy(char *dest, char *src, size_t size)
{
    size_t i;
    size_t len;

    i = 0;
    len = 0;
    while (src[len] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while (src[len])
        len++;
    return (len);
}
/*
#include <stdio.h>
int main(void)
{
    char dest[20];

    unsigned int len1 = ft_strlcpy(dest, "hello", 5);
    printf("Test case 1: Copied %d characters, dest='%s'\n", len1, dest);

    unsigned int len2 = ft_strlcpy(dest, "terra", 3);
    printf("Test case 2: Copied %d characters, dest='%s'\n", len2, dest);

    unsigned int len3 = ft_strlcpy(dest, "hello", 10);
    printf("Test case 3: Copied %d characters, dest='%s'\n", len3, dest);

    return 0;
}*/