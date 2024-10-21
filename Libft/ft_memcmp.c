/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:35:10 by andre             #+#    #+#             */
/*   Updated: 2024/10/21 16:48:04 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>  // for size_t
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned const char *S1;
	unsigned const char *S2;
	size_t i;
	
	S1 = (unsigned const char *)s1;
	S2 = (unsigned const char *)s2;
	i = 0;
	while (i < len)
	{
		if (S1[i] != S2[i])
		{
			return (S1[i] - S2[i]);
		}
		i++;
	}
	return (0);
}

/* int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";  // Same as str1 for the first comparison

    // Compare identical strings using both ft_memcmp and standard memcmp
    printf("Comparing str1 and str2 with ft_memcmp: %d\n", ft_memcmp(str1, str2, sizeof(str1)));  // Expected: 0
    printf("Comparing str1 and str2 with standard memcmp: %d\n", memcmp(str1, str2, sizeof(str1)));  // Expected: 0

    // Change str2 to make it different for the next comparison
    str2[7] = 'w'; 

    // Compare modified strings using both ft_memcmp and standard memcmp
    printf("Comparing str1 and str2 with ft_memcmp after modification: %d\n", ft_memcmp(str1, str2, sizeof(str1)));  // Expected: non-zero
    printf("Comparing str1 and str2 with standard memcmp after modification: %d\n", memcmp(str1, str2, sizeof(str1)));  // Expected: non-zero

    return 0;
} */