/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:57:38 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/29 16:34:53 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	size;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (start >= strlen)
		return (NULL);
	if (strlen - start < len)
		size = strlen - start;
	else
		size = len;
	substr = (char *)malloc(sizeof(char) * (size + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/* int	main(void)
{
	char	*str = "Hello world";
	char 	*sub;

	sub = ft_substr("tripouille", 0, 42000);
	
	printf("Original: %s\n", "tripouille");
	printf("Substr: %s\n", sub);
} */
