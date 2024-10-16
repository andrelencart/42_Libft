/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:52:05 by andre             #+#    #+#             */
/*   Updated: 2024/10/15 18:01:06 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int main() {
    char c = 65;

    if (isascii(c)) {
        printf("System: %c is within the ascii table.\n", c);
    } else {
        printf("System: %c is not within the ascii table.\n", c);
    }

	 if (ft_isascii(c)) {
        printf("mine: %c is within the ascii table.\n", c);
    } else {
        printf("mine: %c is not within the ascii table.\n", c);
    }

    return 0;
} */