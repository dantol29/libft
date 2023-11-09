/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:45:59 by marvin            #+#    #+#             */
/*   Updated: 2023/11/03 10:45:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_words(const char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {

        if (str[i] >= 33 && str[i] <= 126)
        {
            count++;
            while (str[i] >= 33 && str[i] <= 126)
                i++;
        }
        i++;
    }
    return (count);
}

char *extract_word(const char *str, int index)
{
    int len;
    int i;
    char *s;

    len = 0;
    i = index;
    while (str[i] >= 33 && str[i] <= 126)
    {
        i++;
        len++;
    }
    s = (char *)malloc(sizeof(char) * (len + 1));
    if (s == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        s[i] = str[index];
        i++;
        index++;
    }
    s[i] = '\0';
    return (s);
}
char *find_word(const char *str, int index)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {

        if (str[i] >= 33 && str[i] <= 126)
        {
            count++;
            if (count == index)
                return (extract_word(str, i));
            while (str[i] >= 33 && str[i] <= 126)
                i++;
        }
        i++;
    }
}

char *add_delimeter(char c)
{
    char *s;

    s = (char *)malloc(sizeof(char) * 2);
    s[0] = c;
    s[1] = '\0';
    return (s);
}

char **ft_split(char const *s, char c)
{
    int len;
    int i;
    char **str;

    len = count_words(s);
    i = 0;
    str = (char **)malloc(sizeof(char *) * (len + len));
    if (str == NULL)
        return (NULL);
    while (i < len * 2)
    {
        str[i] = find_word(s, i / 2 + 1);
        i++;
        if (!(i + 1 == len * 2))
            str[i] = add_delimeter(c);
        i++;
    }
    str[i] = NULL;
    return (str);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    (void)argc;
    char **s;
    s = ft_split(argv[1], ',');
    int i;
    i = 0;
    while (i < count_words(argv[1]) * 2)
    {
        printf("%s", s[i]);
        i++;
    }
}*/