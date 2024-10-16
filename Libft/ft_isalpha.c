/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:29:58 by andre             #+#    #+#             */
/*   Updated: 2024/10/15 17:44:14 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}


/* int main() {
    char c = '0';

    if (isalpha(c)) {
        printf("System: %c is an alphabetic letter.\n", c);
    } else {
        printf("System: %c is not an alphabetic letter.\n", c);
    }

	if (ft_isalpha(c)) {
        printf("mine: %c is an alphabetic letter.\n", c);
    } else {
        printf("mine: %c is not an alphabetic letter.\n", c);
    }

    return 0;
} */