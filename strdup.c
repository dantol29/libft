/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:10:24 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 10:10:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strdup(const char *str1)
{
    int len;
    int i;
    char *new;

    len = strlen(str1);
    new = (char *)malloc(sizeof(char) * (len + 1));
    if (new == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new[i] = str1[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("%s\n", ft_strdup("hello"));
    printf("%s\n", strdup("hello"));
}*/