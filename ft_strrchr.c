/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:46:09 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/17 12:53:44 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strrchr searchs the last occurance of the character
// in a string s.
// Return: A pointer to the matching character or NULL if it is not found.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen((char *)s);
	if (s[len] == '\0' && c == '\0')
		return ((char *)&s[len]);
	while (len >= i)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
