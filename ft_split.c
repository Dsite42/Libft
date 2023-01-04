/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chris <chris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:04:51 by cgodecke          #+#    #+#             */
/*   Updated: 2023/01/04 21:11:22 by chris            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function ft_split creates a new array of strings that have been split
// from a string seperated by a char. The array ends with a NULL pointer.
// Return: Pointer to the new array of new strings resulting from the split.
// NULL if the allocation fails.

#include "libft.h"

unsigned int	c_count(char const *str, char c)
{
	unsigned int	i;
	unsigned int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			cnt++;
		i++;
	}
	return (cnt);
}

static unsigned int	betweenlen(char const *str, char sep)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != sep)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			*cs;
	char			**arr_split;
	unsigned int	arr_size;
	unsigned int	i;

	i = 0;
	cs = (char *)s;
	arr_size = c_count(cs, c) + 2;
	arr_split = (char **) malloc(arr_size * sizeof(char *));
	if (arr_split == NULL)
		return (NULL);
	while (i < arr_size - 1)
	{
		arr_split[i] = ft_substr((char const *) cs, 0, betweenlen(cs, c));
		cs = ft_strchr(cs, c) + 1;
		i++;
	}
	arr_split[i] = NULL;
	return (arr_split);
}
