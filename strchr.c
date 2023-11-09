/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:02:23 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 11:02:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ((char)c))
            return ((char *)(str + i));
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>
int main()
{
    printf("%s\n", strchr("helloGuys", 'l'));
}*/