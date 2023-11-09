/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:43:28 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 12:43:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && i < n && s1[i])
        i++;
    return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n", ft_strncmp("hellb", "hella", 5));
    printf("%d\n", strncmp("hellb", "hella", 5));
}*/