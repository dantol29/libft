/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:20:53 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 16:20:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memset(void *str, int c, size_t n)
{
    size_t i;
    unsigned char *new;
    unsigned char t;

    new = str;
    t = c;
    i = 0;
    while (i < n)
    {
        new[i] = t;
        i++;
    }
    return (new);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char buffer[21];
    char buffer2[21];

    ft_memset(buffer, 0, sizeof(buffer));
    printf("\nBuffer contents: %s\n", ft_memset(buffer, 'A', 10));
    ft_memset(buffer + 10, 'B', 10);
    printf("\nBuffer contents: %s\n", buffer);

    memset(buffer2, 0, sizeof(buffer2));
    printf("\nBuffer contents: %s\n", memset(buffer2, 'A', 10));
    memset(buffer2 + 10, 'B', 10);
    printf("\nBuffer contents: %s\n", buffer2);
}*/