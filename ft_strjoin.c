/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:02:07 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/18 14:32:12 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strjoin create a new string by concatenate two strings.
// Return: Pointer to new string or NULL if memory allocation fails.

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	join_len;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_len = s1_len + s2_len + 1;
	joined = (char *) malloc(join_len * sizeof(char));
	if (joined == NULL)
		return (NULL);
	ft_strlcat(joined, (char *)s1, (s1_len + 1) * sizeof(char));
	ft_strlcat(joined, (char *)s2, (join_len + 1) * sizeof(char));
	return (joined);
}
