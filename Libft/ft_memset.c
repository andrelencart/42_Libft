/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:19:00 by andre             #+#    #+#             */
/*   Updated: 2024/10/16 19:44:11 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>  // for size_t
#include <stdio.h>

// Used to fill a block of memory with a particular value
void	*ft_memset(void *ptrmem, int c, size_t len) // With the int C the function is more flexible can pass values larger than 255, the memset funtion uses int c as well.
{
	unsigned char	*ptr;
	size_t	i;
	
	ptr = (unsigned char *)ptrmem; 	// Casts the void pointer 'b' to an unsigned char pointer
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c; //  Casts the int c to an unsigned char pointer
		i++;
	}
	return (ptrmem); // Allows function chaining and provides convenience.
}

int main() 
{
    char str[50] = "Hello, World!";
    printf("Before memset: %s\n", str);
    
    // Fill the first 5 characters of the string with '*'
    
    ft_memset(str, '*', 5);
    printf("After ft_memset: %s\n", str);
	memset(str, '*', 5);
	printf("After memset: %s\n", str);
    
	return 0;
}
