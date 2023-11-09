/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:30:48 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 09:30:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void bzero(void *s, size_t n)
{
    int i;
    unsigned char *new;

    new = s;
    i = 0;
    while (i < n)
    {
        new[i] = 0;
        i++;
    }
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char initial[] = "hello";
    ft_bzero(initial, 1);
    printf("%s\n", initial + 1);
    char another[] = "helloGuys";
    memset(another, 0, 5);
    printf("%s\n", another + 5);
}*/