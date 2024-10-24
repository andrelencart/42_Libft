/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:29:53 by andre             #+#    #+#             */
/*   Updated: 2024/10/21 16:48:08 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>  // for size_t
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t len) // Used to copy a block of memory from one location to another
{
	unsigned char *d; 
	unsigned const char *s; 
	size_t i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src; 
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* int main(void)
{
    char src[] = "Hello, World!";
    char dest[20]; 

    printf("Source before memcpy: '%s'\n", src);

    ft_memcpy(dest, src, 13); // Copy 13 bytes from src to dest
    dest[5] = '\0'; // Null-terminate the destination string
    printf("Destination after ft_memcpy: '%s'\n", dest);

    // Now using standard memcpy for comparison
    char dest2[20]; // Another destination array
    memcpy(dest2, src, 13);
    dest2[5] = '\0'; // Null-terminate the standard memcpy destination
    printf("Destination after memcpy: '%s'\n", dest2);

    return 0;
} */