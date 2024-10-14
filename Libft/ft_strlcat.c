/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:03:37 by andre             #+#    #+#             */
/*   Updated: 2024/10/14 20:20:45 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Concatenates src to the end of dest up to size - 1 characters.
 * Always null-terminates the result.
 * Returns the total length of the string that would have been created.
 *
 * @param dest The destination string to which src will be concatenated.
 * @param src The source string to be appended.
 * @param size The size of the destination buffer.
 * @return The length of the resulting string (the initial length of dest + length of src).
 */

 #include <stddef.h>  // for size_t
 
 size_t	ft_strlcat(char *dest, char *src, size_t size)
 {
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && (i + dest_len) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
 }