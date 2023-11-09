/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:56:47 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 12:56:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *str)
{
    int result;
    int sign;
    int i;

    i = 0;
    result = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    (void)argc;
    printf("%d\n", ft_atoi(argv[1]));
    printf("%d\n", atoi(argv[1]));
}*/