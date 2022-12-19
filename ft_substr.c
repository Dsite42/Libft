/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:02:07 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/19 11:32:34 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_substr creates a new substring out of a strings.
// The substring begins at index ’start’ and is of maximum size ’len’.
// Return: Pointer to new substring or NULL if memory allocation fails.

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			j;

	i = start;
	j = 0;
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (i < start + len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[i] = '\0';
	return (sub);
}
