/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:28:57 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/25 13:49:54 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrchr(const char *ptr, int c)
{
	char	*p;
	int i;

	p = (char *)ptr;
	i = ft_strlen(p);
	while (i >= 0)
	{
		if (p[i] == (char)c)
			return (p + i);
		i--;
	}
	return (0);
}

/* int main() {
    const char *text = "Hello, world!";
    char target = 'l';

    char *result = ft_strrchr(text, target);

    if (result != NULL) {
        printf("Last occurrence of '%c': %s\n", target, result);
    } else {
        printf("Character '%c' not found.\n", target);
    }

    return 0;
} */
