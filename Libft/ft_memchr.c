/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:07:38 by andre             #+#    #+#             */
/*   Updated: 2024/10/16 20:32:26 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>  // for size_t
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t len) // Used to locate the first occurrence of a specified character in a block of memory.
{
	size_t i;
	unsigned const char *s; 
	unsigned char ch;
	
	ch = (unsigned char)c;
	s = (unsigned const char *)str;
	i = 0;
	while (i < len) // Iterate over the first n bytes
	{
		if (s[i] == ch)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char str[] = "Hello, World!";
	char *result;

	// Using ft_memchr to find 'o' in the string
	result = ft_memchr(str, 'o', sizeof(str));
	if (result)
		printf("Found '%c' at position: %ld\n", *result, result - str);
	else
		printf("Character not found!\n");

	// Using standard memchr for comparison
	char *result2 = memchr(str, 'o', sizeof(str));
	if (result2)
		printf("Standard memchr: Found '%c' at position: %ld\n", *result2, result2 - str);
	else
		printf("Standard memchr: Character not found!\n");

	return 0;
}

