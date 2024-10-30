/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:46:54 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/30 19:13:31 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_memset(void *ptrmem, int c, size_t len)
{
	unsigned char	*ptr;
	size_t	i;
	
	ptr = (unsigned char *)ptrmem;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (ptrmem); 
} */

void	*ft_calloc(size_t num, size_t size)
{
	int		total_size;
	void	*ptr;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int main() {
//     size_t n = 10;
//     int* arr = (int*) ft_calloc(n, sizeof(int));
// 	size_t i = 0;

//     if (arr == NULL) 
// 	{
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     while(i < n) 
// 	{
//         printf("arr[%zu] = %d\n", i, arr[i]);
// 		i++;
//     }
//     free(arr);
//     return 0;
// }