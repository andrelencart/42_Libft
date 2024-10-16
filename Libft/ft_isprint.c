/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:57:02 by andre             #+#    #+#             */
/*   Updated: 2024/10/15 18:00:47 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* int main() {
    char c = '\t';

    if (isprint(c)) {
        printf("System: %c is a printable character\n", c);
    } else {
        printf("System: %c is not a printable character\n", c);
    }

	 if (ft_isprint(c)) {
        printf("mine: %c is a printable character\n", c);
    } else {
        printf("mine: %c is not a printable character\n", c);
    }

    return 0;
} */