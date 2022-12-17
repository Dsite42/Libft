/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:20:42 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/17 11:25:56 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_memcmp compares the first n bytes (each interpreted 
// as unsigned char) of the memory areas s1 and s2.
// Return: Difference between the first pair of bytes (interpreted as unsigned
//char) that differ in s1 and s2 as int. If n is zero, the return value is zero.

#include <strings.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*cs1;
	char	*cs2;
	size_t	i;
	int		diff_val;

	cs1 = (char *)s1;
	cs2 = (char *)s2;
	i = 0;
	while (i < n && (cs1[i] != '\0' || cs2[i] != '\0'))
	{
		if (cs1[i] != cs2[i])
		{
			diff_val = (unsigned char)cs1[i] - (unsigned char)cs2[i];
			return (diff_val);
		}
		i++;
	}
	return (0);
}
