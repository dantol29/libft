/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:42:49 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 10:42:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    src_len = 0;
    dest_len = 0;
    while (dest_len < size && dest[dest_len])
        dest_len++;
    while (src_len < size - dest_len - 1 && src[src_len])
        src_len++;
    i = 0;
    while (i < src_len)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    if (size > 0)
        dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}
/*
#include <stdio.h>
int main()
{
    char dest1[10] = "Hello";
    const char src1[] = ", World!";
    printf("Result: %s\n", dest1);
    printf("Len: %zu\n", strlcat(dest1, src1, sizeof(dest1)));

    char dest2[10] = "Hello";
    const char src2[] = ", World!";
    printf("Result: %s\n", dest2);
    printf("Len: %zu\n", strlcat(dest2, src2, sizeof(dest2)));

    char dest3[20] = "Hello";
    const char src3[] = "";
    printf("Result: %s\n", dest3);
    printf("Len: %zu\n", strlcat(dest3, src3, sizeof(dest3)));

    char dest4[10] = "";
    const char src4[] = "Hello";
    printf("Result: %s\n", dest4);
    printf("Len: %zu\n", strlcat(dest4, src4, sizeof(dest4)));
}*/