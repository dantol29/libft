/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:40:36 by marvin            #+#    #+#             */
/*   Updated: 2023/11/01 14:40:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}
/*
#include <stdio.h>
int main()
{
    printf("%c\n", toupper('x'));
}*/