/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:34:02 by marvin            #+#    #+#             */
/*   Updated: 2023/10/31 12:34:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

void *memset(void *str, int c, size_t n);
void bzero(void *s, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
void *memccpy(void *dest, const void *src, int c, size_t n);
void *memmove(void *str1, const void *str2, size_t n); // not sure about this one
void *memchr(const void *str, int c, size_t n);        // not sure about this one
int memcmp(const void *str1, const void *str2, size_t n);
int strlen(char *str);
size_t strlcpy(char *dest, char *src, size_t size);
size_t strlcat(char *dest, const char *src, size_t size);
char *strchr(const char *str, int c);
char *strrchr(const char *str, int c);
char *strnstr(const char *s1, const char *s2, size_t len);
int strncmp(const char *s1, const char *s2, int n);
int atoi(const char *str);
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int isascii(int c);
int isprint(int c);
int toupper(int c);
int tolower(int c);
void *calloc(size_t nitems, size_t size);
char *strdup(const char *str1);
char **ft_split(char const *s, char c);

#endif