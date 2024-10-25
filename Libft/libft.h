/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:49:25 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/25 15:38:07 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *ptr, size_t size);
void	*ft_calloc(size_t num, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *str, int c, size_t len);
int	ft_memcmp(const void *s1, const void *s2, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *ptrmem, int c, size_t len);
char	*ft_strchr(const char *ptr, int c);
char	*ft_strdup(char *src);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strrchr(const char *ptr, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif //LIBFT_H