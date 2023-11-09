/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:14:40 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 17:14:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *calloc(size_t nitems, size_t size)
{
    void *memory;

    memory = malloc(size * nitems);
    if (memory == NULL)
        return (NULL);
    memset(memory, 0, size * nitems);
    return (memory);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int *ptr;
    int *ptr2;
    int i;

    ptr = (int *)calloc(7, sizeof(int));
    for (i = 0; i < 7; ++i)
    {
        ptr[i] = i + 1;
    }
    printf("The elements of the array are: ");
    for (i = 0; i < 7; ++i)
    {
        printf("%d, ", ptr[i]);
    }

    ptr2 = (int *)ft_calloc(7, sizeof(int));
    for (i = 0; i < 7; ++i)
    {
        ptr2[i] = i + 1;
    }
    printf("The elements of the array are: ");
    for (i = 0; i < 7; ++i)
    {
        printf("%d, ", ptr2[i]);
    }
}*/