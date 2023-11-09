/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:09:21 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 13:09:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *str, int c)
{
    int i;
    int occurence;

    i = 0;
    occurence = -1;
    while (str[i])
    {
        if (str[i] == (char)c)
            occurence = i;
        i++;
    }
    if (occurence != -1)
        return ((char *)(str + occurence));
    return (NULL);
}
/*
#include <stdio.h>
int main()
{
    printf("%s\n", strrchr("noWayItWorks", 'W'));
}*/