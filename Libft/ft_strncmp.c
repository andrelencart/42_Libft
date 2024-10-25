/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:23:34 by andre             #+#    #+#             */
/*   Updated: 2024/10/25 13:48:57 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("Sys: %d\n", strncmp(argv[1], argv[2], 3));
	printf("Mine: %d\n", ft_strncmp(argv[1], argv[2], 3));
} */
