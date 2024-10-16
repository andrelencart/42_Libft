/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:48:32 by andre             #+#    #+#             */
/*   Updated: 2024/10/16 20:32:30 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>  // for size_t
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)  // Used to copy a block of memory from one location to another, similar to memcpy, but it is specifically designed to handle overlapping memory regions safely.
{
	size_t	i;
	unsigned char *d; 
	unsigned const char *s; 

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (d < s) // If source and destination overlap, copy from the end to the start
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest)
}

int main(void)
{
    char str[20] = "Hello, World!";
    printf("Original string: '%s'\n", str);

    // Using ft_memmove to overlap regions
    ft_memmove(str + 13, str, 6); // Move "Hello," to the position after ", "
    printf("After ft_memmove: '%s'\n", str); // Expected output: "Hello, Hello!"

    // Using standard memmove for comparison
    char str2[20] = "Hello, World!";
    memmove(str2 + 13, str2, 6); // Move "Hello," to the position after ", "
    printf("After standard memmove: '%s'\n", str2); // Expected output: "Hello, Hello!"

    return 0;

}

