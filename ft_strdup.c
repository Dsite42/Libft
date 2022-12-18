/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:37:07 by cgodecke          #+#    #+#             */
/*   Updated: 2022/12/18 10:42:20 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_strdup duplicates a string.
// Return: A pointer to the duplicated string. It returns NULL if insufficient
// memory was available.

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	char	*dup_start;

	dup = malloc((ft_strlen((char *)src) * sizeof(char)) + 1);
	if (dup == NULL)
		return (NULL);
	dup_start = dup;
	while (*src)
	{
		*dup = *src;
		src++;
		dup++;
	}
	*(dup) = '\0';
	return (dup_start);
}
