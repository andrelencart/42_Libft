/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:45:58 by andre             #+#    #+#             */
/*   Updated: 2024/10/14 20:05:19 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // for size_t

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (src[src_len] == 0)
		return (src_len);
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}